#include "fotos.h"
#include "ui_fotos.h"
#include "confirmacion.h"
#include "editarlugar.h"
#include "subirfoto.h"
#include "editarlugar.h"
#include "crearlugar.h"
#include "imagen.h"

Fotos::Fotos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Fotos)
{
    ui->setupUi(this);
}

Fotos::Fotos(int id) :
    ui(new Ui::Fotos)
{
    ui->setupUi(this);
    id_lugar = id;
    mostrar(id_lugar);
}

void Fotos::mostrar(int id_lugar){
    QVBoxLayout *lay = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents->layout());
    QSqlQuery num("SELECT COUNT(*) FROM Galeria WHERE id_lugar = "+QString::number(id_lugar)+";");
    num.next();
    int cantidad = num.value(0).toInt();
    if(cantidad > 0){
        ui->label_null->hide();
        QSqlQuery id_foto("SELECT id_foto FROM Galeria WHERE id_lugar = "+QString::number(id_lugar)+";");
        for(int i = 0; i < cantidad; ++i){
            id_foto.next();
            int idFoto = id_foto.value(i).toInt();
            Imagen *muestra = new Imagen(this);
            muestra->rellenar(idFoto);
            lay->addWidget(muestra);
        }
        ui->scrollAreaWidgetContents->setLayout(lay);
    }
}

void Fotos::agregar_foto(int id_lugar){
    ui->label_null->hide();
    QVBoxLayout *lay = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents->layout());
    QSqlQuery agregado("SELECT LAST_INSERT_ID()");
    agregado.next();
    int idFoto = agregado.value(0).toInt();
    Imagen *muestra = new Imagen(this);
    muestra->rellenar(idFoto);
    lay->addWidget(muestra);
    ui->scrollAreaWidgetContents->setLayout(lay);
}

Fotos::~Fotos()
{
    delete ui;
}

void Fotos::on_pushButton_agregar_clicked()
{
    int idLugar = id_lugar;
    SubirFoto agregar(idLugar);
    agregar.setModal(true);
    agregar.exec();
    agregar_foto(idLugar);
}


void Fotos::on_buttonBox_accepted()
{
    int idLugar = id_lugar;
    QMessageBox::information(this,"Galeria","Galeria actualizada");
    this -> hide();
}


void Fotos::on_pushButton_clicked()
{
    int idLugar = id_lugar;
    QMessageBox::information(this,"Galeria","Galeria actualizada");
    this -> hide();
}
