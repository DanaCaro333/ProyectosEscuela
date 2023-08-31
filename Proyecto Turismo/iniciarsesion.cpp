#include "iniciarsesion.h"
#include "ui_iniciarsesion.h"
#include "buscadorprincipal.h"
#include "paginaprincipal.h"
#include "adminlugar.h"
#include "crearusuario.h"
#include "crearadministrador.h"
#include "session.h"

IniciarSesion::IniciarSesion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IniciarSesion)
{
    ui->setupUi(this);
}

IniciarSesion::IniciarSesion(int opcion) :
    ui(new Ui::IniciarSesion)
{
    ui->setupUi(this);
    opc = opcion;
    switch (opc) {
    case 1:
        ui->label_sesion->setText("Usuario");
        break;
    case 2:
        ui->label_sesion->setText("Administrador de negocio");
        break;
    }
}
IniciarSesion::~IniciarSesion()
{
    delete ui;
}


void IniciarSesion::on_pushButton_atras_clicked()
{
    this -> hide();
    PaginaPrincipal principal;
    principal.setModal(true);
    principal.exec();
}

void IniciarSesion::on_pushButton_iniciar_2_clicked()
{
    this -> hide();
    if(opc==1){
        CrearUsuario crearusuario;
        crearusuario.setModal(true);
        crearusuario.exec();
    }
    else if (opc==2){
        CrearAdministrador crearadmin;
        crearadmin.setModal(true);
        crearadmin.exec();
    }
}
void IniciarSesion::on_pushButton_iniciar_clicked(){
    usuario = ui ->lineEdit_usuario->text();
    password = ui ->lineEdit_contrasena->text();
    QSqlQuery q;
    q.exec("SELECT count(*) FROM Usuario where usuario LIKE '"+usuario+"'AND password LIKE '"+password+"' AND tipo LIKE "+QString::number(opc)+";");
    q.next();
    int cantidad = q.value(0).toInt();
    if(cantidad != 1){
        QMessageBox::information(this,"Error", "Usuario o password incorrectos");
    }else{
        buscar();
    }
}
void IniciarSesion::buscar()
{
    QSqlQuery user("SELECT * FROM Usuario where usuario LIKE '"+usuario+"'AND password LIKE '"+password+"' AND tipo LIKE "+QString::number(opc)+";");
    user.next();
    Session::get()->set_user_id(user.value(0).toInt());
    if (opc==2){
        this -> hide();
        Adminlugar principalAdmin;
        principalAdmin.setModal(true);
        principalAdmin.exec();
    }else if (opc==1){
        this -> hide();
        BuscadorPrincipal principalUsuario;
        principalUsuario.setModal(true);
        principalUsuario.exec();
    }

}
