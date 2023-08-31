#include "crearusuario.h"
#include "ui_crearusuario.h"
#include "iniciarsesion.h"
#include "buscadorprincipal.h"
#include <QSqlError>
#include "session.h"

CrearUsuario::CrearUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CrearUsuario)
{
    ui->setupUi(this);
}

CrearUsuario::~CrearUsuario()
{
    delete ui;
}

void CrearUsuario::on_pushButton_atras_clicked()
{
    this -> hide();
    IniciarSesion iniciarsesion(1);
    iniciarsesion.setModal(true);
    iniciarsesion.exec();
}
void CrearUsuario::on_pushButton_crearUsuario_clicked()
{
    QString nombre = ui ->lineEdit_nombre->text();
    QString apellido = ui ->lineEdit_apellido->text();
    QString correo = ui ->lineEdit_correo->text();
    QString usuario = ui ->lineEdit_usuario->text();
    QString password = ui ->lineEdit_password->text();
    QSqlQuery query;
    auto done = query.exec("INSERT INTO Usuario (tipo, nombre, apellido, correo, usuario, password) VALUES (1, '"+nombre+"','"+apellido+"','"+correo+"','"+usuario+"','"+password+"')");

    if(done){
        QMessageBox::information(this,"Connection","Database connected Succesfully");
    }else{
        QMessageBox::information(this,"Not Connected", "Database is not connected");
    }

    this -> hide();
    QSqlQuery user("SELECT LAST_INSERT_ID()");
    user.next();
    Session::get()->set_user_id(user.value(0).toInt());
    BuscadorPrincipal principalUsuario;
    principalUsuario.setModal(true);
    principalUsuario.exec();
}
