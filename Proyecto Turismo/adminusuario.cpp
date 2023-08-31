#include "adminusuario.h"
#include "ui_adminusuario.h"
#include "detallereporte.h"
#include "editarusuario.h"

AdminUsuario::AdminUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminUsuario)
{
    ui->setupUi(this);
}

AdminUsuario::AdminUsuario(int id) :
    ui(new Ui::AdminUsuario)
{
    ui->setupUi(this);
}

AdminUsuario::~AdminUsuario()
{
    delete ui;
}

void AdminUsuario::on_pushButton_detalle_clicked()
{
    DetalleReporte detalle;
    detalle.setModal(true);
    detalle.exec();
}

void AdminUsuario::on_pushButton_editar_clicked()
{
    EditarUsuario edit;
    edit.setModal(true);
    edit.exec();
}
