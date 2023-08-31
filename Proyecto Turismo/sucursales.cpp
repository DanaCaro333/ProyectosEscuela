#include "sucursales.h"
#include "ui_sucursales.h"
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QDialog>

Sucursales::Sucursales(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sucursales)
{
    ui->setupUi(this);
}

Sucursales::~Sucursales()
{
    delete ui;
}

void Sucursales::rellenar(int idDireccion)
{
    QSqlQuery direccion("SELECT * FROM Direccion WHERE id_direccion = "+QString::number(idDireccion)+";");
    direccion.next();
    id_direccion = idDireccion;
    int municipio = direccion.value(1).toInt();
    QString colonia = direccion.value(2).toString();
    QString calle = direccion.value(3).toString();
    QString numero = direccion.value(4).toString();
    QString domicilio = calle+" #"+numero+" "+colonia+" "+set_municipio(municipio);
    ui->label->setText(domicilio);
}

QString Sucursales::set_municipio(int lugar){
    QString municipio;
    if(lugar == 1){
        municipio = "Guadalajara";
    }else if(lugar == 2){
        municipio = "Tlaquepaque";
    }else if(lugar == 3){
        municipio = "Tlajomulco";
    }else if(lugar == 4){
        municipio = "Zapopan";
    }else if(lugar == 5){
        municipio = "Tonalá";}
    return municipio;
}


void Sucursales::on_pushButton_eliminar_clicked()
{
    int idDireccion = id_direccion;
    QSqlQuery suc;
    QSqlQuery direccion;
    auto done = suc.exec("DELETE FROM Sucursal WHERE id_foto = "+QString::number(idDireccion)+";");
    direccion.exec("DELETE FROM Direccion WHERE id_foto = "+QString::number(idDireccion)+";");
    this->hide();
}
