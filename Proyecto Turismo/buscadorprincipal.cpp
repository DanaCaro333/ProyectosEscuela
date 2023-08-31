#include "buscadorprincipal.h"
#include "ui_buscadorprincipal.h"
#include "iniciarsesion.h"
#include "crearlugar.h"
#include "lugarfiltros.h"
#include "adminusuario.h"
#include "paginaprincipal.h"
#include "session.h"


BuscadorPrincipal::BuscadorPrincipal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BuscadorPrincipal)
{
    ui->setupUi(this);
    id_usuario = Session::get()->get_user_id();
    QSqlQuery user("SELECT usuario FROM Usuario WHERE id_usuario = "+QString::number(id_usuario)+";");
    user.next();
    QString username = user.value(0).toString();
    ui->label_username->setText(username);
}

BuscadorPrincipal::~BuscadorPrincipal()
{
    delete ui;
}

void BuscadorPrincipal::on_pushButton_micuenta_clicked()
{
    this -> hide();
    AdminUsuario admin;
    admin.setModal(true);
    admin.exec();
}

void BuscadorPrincipal::on_pushButton_comida_clicked()
{
    this -> hide();
    LugarFiltros filtro(1);
    filtro.setModal(true);
    filtro.exec();
}

void BuscadorPrincipal::on_pushButton_autoservicio_clicked()
{
    this -> hide();
    LugarFiltros filtro(2);
    filtro.setModal(true);
    filtro.exec();
}

void BuscadorPrincipal::on_pushButton_cultural_clicked()
{
    this -> hide();
    LugarFiltros filtro(3);
    filtro.setModal(true);
    filtro.exec();
}

void BuscadorPrincipal::on_pushButton_natural_clicked()
{
    this -> hide();
    LugarFiltros filtro(4);
    filtro.setModal(true);
    filtro.exec();
}

void BuscadorPrincipal::on_pushButton_salud_clicked()
{
    this -> hide();
    LugarFiltros filtro(5);
    filtro.setModal(true);
    filtro.exec();
}

void BuscadorPrincipal::on_pushButton_cerrar_clicked()
{
    this -> hide();
    PaginaPrincipal principal;
    principal.setModal(true);
    principal.exec();
}
