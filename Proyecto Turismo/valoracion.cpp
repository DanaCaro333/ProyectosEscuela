#include "valoracion.h"
#include "ui_valoracion.h"
#include "confirmacion.h"
#include "mostrarlugar.h"
#include "session.h"
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QDialog>
#include <QSqlQueryModel>

Valoracion::Valoracion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Valoracion)
{
    ui->setupUi(this);
}

Valoracion::~Valoracion()
{
    delete ui;
}

Valoracion::Valoracion(int id_lugar) :
    ui(new Ui::Valoracion)
{
    ui->setupUi(this);
    ui->comboBox_estrella->addItem(" ");
    ui->comboBox_estrella->addItem("1 Estrella");
    ui->comboBox_estrella->addItem("2 Estrellas");
    ui->comboBox_estrella->addItem("3 Estrellas");
    idLugar = id_lugar;
}


void Valoracion::on_pushButton_enviar_clicked()
{
    QString comentario = ui ->plainTextEdit_comentario->toPlainText();
    int estrellas = ui ->comboBox_estrella->currentIndex();
    int id_lugar = idLugar;
    QSqlQuery query;
    auto done = query.exec("INSERT INTO Comentario (id_usuario, id_lugar, comentario, estrellas) VALUES ("+QString::number(Session::get()->get_user_id())+","+QString::number(id_lugar)+",'"+comentario+"',"+QString::number(estrellas)+");");

    if(done){
        QMessageBox::information(this,"Connection","Database connected Succesfully");
    }else{
        QMessageBox::information(this,"Not Connected", "Database is not connected");
    }

    this -> hide();
    MostrarLugar lugar;
    lugar.setModal(true);
    lugar.exec();
}

void Valoracion::on_pushButton_atras_clicked()
{
    this -> hide();
    MostrarLugar lugar;
    lugar.setModal(true);
    lugar.exec();
}
