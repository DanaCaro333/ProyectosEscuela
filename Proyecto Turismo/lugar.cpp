#include "lugar.h"
#include "ui_lugar.h"
#include "mostrarlugar.h"
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QDialog>
#include <QSqlQueryModel>

Lugar::Lugar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lugar)
{
    ui->setupUi(this);
}

Lugar::~Lugar()
{
    delete ui;
}

void Lugar::rellenar(int id){
    idLugar = id;

    QSqlQuery name("SELECT nombre FROM Lugar WHERE id_lugar = "+QString::number(idLugar)+";");
    name.next();
    QString nombre = name.value(0).toString();
    ui->label_nombre->setText(nombre);

    QSqlQuery des("SELECT descripcion FROM Lugar WHERE id_lugar = "+QString::number(idLugar)+";");
    des.next();
    QString descripcion = des.value(0).toString();
    ui->textBrowser_descripcion->setText(descripcion);

    QSqlQuery galeria("SELECT id_foto FROM Galeria WHERE id_lugar = "+QString::number(idLugar)+";");
    galeria.next();
    int id_foto= galeria.value(0).toInt();

    QSqlQuery foto;
    QSqlQueryModel model;
    foto.exec("SELECT foto FROM Foto WHERE id_foto = "+QString::number(id_foto)+";");
    model.setQuery(foto);

    auto index = model.index(0,0);

    QByteArray ba1 = index.data().toByteArray();
    QPixmap pic;
    pic.loadFromData( ba1);

    int w = ui->label_foto->width();
    int h = ui->label_foto->height();
    ui->label_foto->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));

}

void Lugar::on_pushButton_ver_clicked()
{
    int id_lugar = idLugar;
    MostrarLugar mostrar(id_lugar,1);
    mostrar.setModal(true);
    mostrar.exec();
}
