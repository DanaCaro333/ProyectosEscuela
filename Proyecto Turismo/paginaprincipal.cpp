#include "paginaprincipal.h"
#include "ui_paginaprincipal.h"
#include "iniciarsesion.h"

PaginaPrincipal::PaginaPrincipal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PaginaPrincipal)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setPort(3310);
    db.setHostName("127.0.0.1");
    db.setUserName("dana");
    db.setPassword("86547");
    db.setDatabaseName("turismo");

    if(!db.open()){
        QMessageBox::information(this,"Not Connected", "Database is not connected");
    }
}

PaginaPrincipal::~PaginaPrincipal()
{
    delete ui;
}

void PaginaPrincipal::on_pushButton_usuario_clicked()
{
    this -> hide();
    IniciarSesion iniciosesion(1);
    iniciosesion.setModal(true);
    iniciosesion.exec();
}


void PaginaPrincipal::on_pushButton_negocio_clicked()
{
    this -> hide();
    IniciarSesion iniciosesion(2);
    iniciosesion.setModal(true);
    iniciosesion.exec();
}
