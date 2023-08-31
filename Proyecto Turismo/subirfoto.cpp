#include "subirfoto.h"
#include "ui_subirfoto.h"
#include "fotos.h"
#include "confirmacion.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
SubirFoto::SubirFoto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SubirFoto)
{
    ui->setupUi(this);
}
SubirFoto::SubirFoto(int id) :
    ui(new Ui::SubirFoto)
{
    ui->setupUi(this);
    id_lugar = id;
}

SubirFoto::~SubirFoto()
{
    delete ui;
}

void SubirFoto::on_pushButton_agregar_clicked()
{
    filename = QFileDialog::getOpenFileName(this, tr("Choose"), "",tr("Images (*.png *.xpm *.jpg)"));
    QImage image;
    if(QString::compare(filename, QString()) !=0){
        bool valid = image.load(filename);
        if(valid){
            image = image.scaledToWidth(ui->label_image->width(),Qt::SmoothTransformation);
            ui->label_image->setPixmap(QPixmap::fromImage(image));
        }
        else{
            //
        }
    }
}

void SubirFoto::on_buttonBox_accepted()
{
    QSqlQuery query;
    auto done = query.exec("INSERT INTO Foto (foto) VALUES (LOAD_FILE('"+filename+"'))");

    if(!done){
        QMessageBox::information(this,"Not Connected", "Database is not connected");
    }

    int idLugar = id_lugar;
    QSqlQuery foto("SELECT LAST_INSERT_ID()");
    foto.next();
    int idFoto = foto.value(0).toInt();
    QSqlQuery q;
    auto done2 = q.exec("INSERT INTO Galeria (id_lugar,id_foto) VALUES ("+QString::number(idLugar)+","+QString::number(idFoto)+")");
    if(!done2){
        QMessageBox::information(this,"Connection","Database connected Succesfully");
    }

    this -> hide();
}

void SubirFoto::on_buttonBox_rejected()
{
    this -> hide();
}
