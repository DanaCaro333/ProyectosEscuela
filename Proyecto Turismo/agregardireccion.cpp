#include "agregardireccion.h"
#include "ui_agregardireccion.h"
#include "editorlugar.h"
#include "crearlugar.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>


AgregarDireccion::AgregarDireccion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AgregarDireccion)
{
    ui->setupUi(this);
}

AgregarDireccion::AgregarDireccion(int idLugar) :
    ui(new Ui::AgregarDireccion)
{
    ui->setupUi(this);
    id_lugar = idLugar;
    ui->comboBox_lugar->addItem(" ");
    ui->comboBox_lugar->addItem("Guadalajara");
    ui->comboBox_lugar->addItem("Tlaquepaque");
    ui->comboBox_lugar->addItem("Tlajomulco");
    ui->comboBox_lugar->addItem("Zapopan");
    ui->comboBox_lugar->addItem("Tonalá");
}

AgregarDireccion::~AgregarDireccion()
{
    delete ui;
}

void AgregarDireccion::on_pushButton_atras_clicked()
{
    this -> hide();

}

void AgregarDireccion::on_pushButton_clicked()
{


}

void AgregarDireccion::on_buttonBox_accepted()
{
    int municipio = ui ->comboBox_lugar->currentIndex();
    QString colonia = ui ->lineEdit_colonia->text();
    QString calle = ui ->lineEdit_calle->text();
    int numero = ui ->lineEdit_numero->text().toInt();
    QSqlQuery query;
    auto done = query.exec("INSERT INTO Direccion (municipio, colonia, calle, numero) VALUES ('"+QString::number(municipio)+"', '"+colonia+"','"+calle+"',"+QString::number(numero)+")");
    if(!done){
        QSqlError x = query.lastError();
        QMessageBox::information(this, "no", x.text());
    }

    int idLugar = id_lugar;
    QSqlQuery direccion("SELECT LAST_INSERT_ID()");
    direccion.next();
    int idDireccion = direccion.value(0).toInt();
    QSqlQuery q;
    auto done2 = q.exec("INSERT INTO Sucursal (id_lugar,id_direccion) VALUES ("+QString::number(idLugar)+","+QString::number(idDireccion)+")");
    if(!done2){
        QSqlError x = query.lastError();
        QMessageBox::information(this, "no", x.text());
    }

    this -> hide();
}
