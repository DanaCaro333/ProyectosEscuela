#include "adminlugar.h"
#include "ui_adminlugar.h"
#include "mostrarlugar.h"
#include <QPushButton>
#include <QVBoxLayout>
#include "comentario.h"
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QDialog>
#include "session.h"
#include "paginaprincipal.h"

Adminlugar::Adminlugar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adminlugar)
{
    ui->setupUi(this);
    id_admin = Session::get()->get_user_id();
    int idAdmin = id_admin;

    QSqlQuery name("SELECT nombre, id_lugar FROM Lugar WHERE id_usuario = "+QString::number(idAdmin)+";");
    name.next();
    QString nombre = name.value(0).toString();
    int idLugar = name.value(1).toInt();
    ui->label_nombre->setText(nombre);
    comentarios(idLugar);
}

Adminlugar::~Adminlugar()
{
    delete ui;
}

void Adminlugar::on_pushButton_clicked()
{
    int idAdmin = id_admin;

    QSqlQuery id_lugar("SELECT id_lugar FROM Lugar WHERE id_usuario = "+QString::number(idAdmin)+";");
    id_lugar.next();
    int idLugar = id_lugar.value(0).toInt();
    MostrarLugar mostrar(idLugar,2);
    mostrar.setModal(true);
    mostrar.exec();
}

void Adminlugar::comentarios(int idLugar){
    QVBoxLayout *lay = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents_comentarios->layout());
    QSqlQuery num("SELECT COUNT(*) FROM Comentario WHERE id_lugar = "+QString::number(idLugar)+";");
    num.next();
    int cantidad = num.value(0).toInt();
    if(cantidad > 0){
        ui->label_null->hide();
        QSqlQuery id_comentario("SELECT id_comentario FROM Comentario WHERE id_lugar = "+QString::number(idLugar)+";");
        for(int i = 0; i < cantidad; ++i){
            id_comentario.next();
            int idComentario = id_comentario.value(0).toInt();
            Comentario *comentario = new Comentario(this);
            comentario->rellenar(idComentario);
            lay->addWidget(comentario);
        }
        ui->scrollAreaWidgetContents_comentarios->setLayout(lay);
   }
}

void Adminlugar::on_pushButton_cerrar_clicked()
{
    this->hide();
    PaginaPrincipal inicial;
    inicial.setModal(true);
    inicial.exec();
}
