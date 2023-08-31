#include "imagen.h"
#include "ui_imagen.h"
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QDialog>
#include <QSqlQueryModel>
#include <QSqlError>

Imagen::Imagen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Imagen)
{
    ui->setupUi(this);
}

Imagen::~Imagen()
{
    delete ui;
}

void Imagen::rellenar(int idFoto)
{
    id_foto = idFoto;
    QSqlQuery foto;
    QSqlQueryModel model;
    foto.exec("SELECT foto FROM Foto WHERE id_foto = "+QString::number(idFoto)+";");
    model.setQuery(foto);

    auto index = model.index(0,0);

    QByteArray ba1 = index.data().toByteArray();
    QPixmap pic;
    pic.loadFromData(ba1);
    int w = ui->label_foto->width();
    int h = ui->label_foto->height();
    ui->label_foto->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));
    ui->label_id->setText("ID imagen: "+QString::number(idFoto));
}

void Imagen::on_pushButton_eliminar_clicked()
{
    int idFoto = id_foto;
    QSqlQuery gale;
    QSqlQuery foto;
    gale.exec("DELETE FROM Galeria WHERE id_foto = "+QString::number(idFoto)+";");
    auto done = foto.exec("DELETE FROM Foto WHERE id_foto = "+QString::number(idFoto)+";");
    this->hide();
    if(done){
        QMessageBox::information(this,"Foto","Foto eliminada");
    }else{
        QSqlError x = foto.lastError();
        QMessageBox::information(this, "Foto", x.text());
        }
}
