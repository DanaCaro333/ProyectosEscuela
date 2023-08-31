#include "crearadministrador.h"
#include "ui_crearadministrador.h"
#include "crearlugar.h"
#include "iniciarsesion.h"
#include <QVariant>

CrearAdministrador::CrearAdministrador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CrearAdministrador)
{
    ui->setupUi(this);
}

CrearAdministrador::~CrearAdministrador()
{
    delete ui;
}

void CrearAdministrador::on_pushButton_crearLugar_clicked()
{
    QString nombre = ui ->lineEdit_nombre->text();
    QString apellido = ui ->lineEdit_apellido->text();
    QString correo = ui ->lineEdit_correo->text();
    QString usuario = ui ->lineEdit_usuario->text();
    QString password = ui ->lineEdit_password->text();
    QSqlQuery query;
    auto done = query.exec("INSERT INTO Usuario (tipo, nombre, apellido, correo, usuario, password) VALUES (2, '"+nombre+"','"+apellido+"','"+correo+"','"+usuario+"','"+password+"')");

    if(!done){
        QMessageBox::information(this,"Not Connected", "Administrador no creado");
    }
    QSqlQuery numero("SELECT id_usuario FROM Usuario WHERE usuario = '"+usuario+"';");
    numero.next();
    int id_admin = numero.value(0).toInt();
    QSqlQuery q;
    q.exec("INSERT INTO Lugar (id_usuario) VALUES ("+QString::number(id_admin)+")");
    this -> hide();
    QSqlQuery lugar("SELECT LAST_INSERT_ID()");
    lugar.next();
    int id_lugar = lugar.value(0).toInt();
    CrearLugar lugarnuevo(id_lugar);
    lugarnuevo.setModal(true);
    lugarnuevo.exec();
}

void CrearAdministrador::on_pushButton_atras_clicked()
{
    this -> hide();
    IniciarSesion iniciarsesion(1);
    iniciarsesion.setModal(true);
    iniciarsesion.exec();
}
