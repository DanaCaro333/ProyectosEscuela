#include "comentario.h"
#include "ui_comentario.h"
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QDialog>

Comentario::Comentario(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Comentario())
{
    ui->setupUi(this);
}

Comentario::~Comentario()
{
    delete ui;
}

void Comentario::rellenar(int id){
    int idComentario = id;

    QSqlQuery id_usuario("SELECT id_usuario FROM Comentario WHERE id_comentario = "+QString::number(idComentario)+";");
    id_usuario.next();
    int idUsuario = id_usuario.value(0).toInt();

    QSqlQuery name("SELECT nombre FROM Usuario WHERE id_usuario = "+QString::number(idUsuario)+";");
    name.next();
    QString nombre = name.value(0).toString();

    ui->label_nombre->setText(nombre);

    QSqlQuery des("SELECT comentario FROM Comentario WHERE id_comentario = "+QString::number(idComentario)+";");
    des.next();
    QString descripcion = des.value(0).toString();
    ui->textBrowser_comentario->setText(descripcion);

}
