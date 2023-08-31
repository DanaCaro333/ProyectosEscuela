#include "lugarfiltros.h"
#include "ui_lugarfiltros.h"
#include "menulugares.h"
#include "buscadorprincipal.h"

LugarFiltros::LugarFiltros(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LugarFiltros)
{
    ui->setupUi(this);
}

LugarFiltros::LugarFiltros(int opcion) :
    ui(new Ui::LugarFiltros)
{
    tipo = opcion;

    ui->setupUi(this);
    char* tema;
    switch (tipo) {
    case 1:
        tema = "/home/danacaro/Pictures/bigfood.png";
        ui->label_tematexto->setText("Comida");
        break;
    case 2:
        tema = "/home/danacaro/Pictures/bigautoservice.png";
        ui->label_tematexto->setText("Autoservicio");
        break;
    case 3:
        tema = "/home/danacaro/Pictures/bigculture.png";
        ui->label_tematexto->setText("Cultural");
        break;
    case 4:
        tema = "/home/danacaro/Pictures/bignature.png";
        ui->label_tematexto->setText("Actividades");
        break;
    case 5:
        tema = "/home/danacaro/Pictures/bigsalud.png";
        ui->label_tematexto->setText("Salud");
        break;
    }

    QImage image(tema);
    image = image.scaledToWidth(ui->label_tema->width(),Qt::SmoothTransformation);
    QPixmap pix(QPixmap::fromImage(image));
    ui->label_tema->setPixmap(pix);


    ui->comboBox_estrella->addItem(" ");
    ui->comboBox_estrella->addItem("1 Estrella");
    ui->comboBox_estrella->addItem("2 Estrellas");
    ui->comboBox_estrella->addItem("3 Estrellas");

    ui->comboBox_lugar->addItem(" ");
    ui->comboBox_lugar->addItem("Guadalajara");
    ui->comboBox_lugar->addItem("Tlaquepaque");
    ui->comboBox_lugar->addItem("Tlajomulco");
    ui->comboBox_lugar->addItem("Zapopan");
    ui->comboBox_lugar->addItem("Tonalá");

    ui->comboBox_precio->addItem(" ");
    ui->comboBox_precio->addItem("$ Económico/Gratis");
    ui->comboBox_precio->addItem("$$ Accesible");
    ui->comboBox_precio->addItem("$$$ Elevado");

}

LugarFiltros::~LugarFiltros()
{
    delete ui;
}


void LugarFiltros::on_pushButton_clicked()
{
    int lugar = tipo;
    int municipio = ui->comboBox_lugar->currentIndex();
    int costo = ui->comboBox_precio->currentIndex();
    int estrella = ui->comboBox_estrella->currentIndex();
    this -> hide();
    MenuLugares lugares(lugar, municipio, costo, estrella);
    lugares.setModal(true);
    lugares.exec();
}


void LugarFiltros::on_pushButton_atras_clicked()
{
    this -> hide();
    BuscadorPrincipal buscador;
    buscador.setModal(true);
    buscador.exec();
}

