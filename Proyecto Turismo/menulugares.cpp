#include "menulugares.h"
#include "ui_menulugares.h"
#include "lugarfiltros.h"
#include "mostrarlugar.h"
#include "lugar.h"
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QDialog>

MenuLugares::MenuLugares(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuLugares)
{
    ui->setupUi(this);
}

void MenuLugares::mostrar(int tipo, int municipio, int costo, int calif){
    QVBoxLayout *lay = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents_lugares->layout());
    QSqlQuery ans("SELECT COUNT(*) FROM Lugar WHERE tipo = "+QString::number(tipo)+" AND costo = "+QString::number(costo)+" AND calif = "+QString::number(calif)+";");
    ans.next();
    int resultados = ans.value(0).toInt();

    if(resultados == 0){
    }else{
        QSqlQuery lugares("SELECT id_lugar FROM Lugar WHERE tipo = "+QString::number(tipo)+" AND costo = "+QString::number(costo)+" AND calif = "+QString::number(calif)+";");
        for(int i = 0; i < resultados; ++i){
            lugares.next();
            int id_lugar = lugares.value(0).toInt();
            if(filtrarMunicipio(municipio,id_lugar)){
                Lugar *muestra = new Lugar(this);
                muestra->rellenar(id_lugar);
                //muestra->setGeometry((0, 0), 681 x 183);
                lay->addWidget(muestra);
            }
        }
        ui->scrollAreaWidgetContents_lugares->setLayout(lay);
    }
}

bool MenuLugares::filtrarMunicipio(int municipio, int id_lugar){
    QSqlQuery ans("SELECT COUNT(*) FROM Sucursal WHERE id_lugar = "+QString::number(id_lugar)+";");
    ans.next();
    int resultados = ans.value(0).toInt();

    if(resultados == 0){
        return false;
    }else{
        ui->label_null->hide();
        QSqlQuery lugares("SELECT id_direccion FROM Sucursal WHERE id_lugar = "+QString::number(id_lugar)+";");
        lugares.next();
        for(int i = 0; i < resultados; ++i){
            int id_direccion = lugares.value(0).toInt();
            QSqlQuery mun("SELECT municipio FROM Direccion WHERE id_direccion = "+QString::number(id_direccion)+";");
            mun.next();
            int lugar = mun.value(0).toInt();
            if (lugar = municipio){
                return true;
            }
        }
    }
}

MenuLugares::MenuLugares(int tipo, int municipio, int costo, int calif) :
    ui(new Ui::MenuLugares)
{
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
    set_costo(costo);
    set_calificacion(calif);
    set_municipio(municipio);
    mostrar(tipo,municipio,costo,calif);

}

MenuLugares::~MenuLugares()
{
    delete ui;
}

void MenuLugares::on_pushButton_atras_clicked()
{
    this -> hide();
    LugarFiltros filtros(opc);
    filtros.setModal(true);
    filtros.exec();
}

void MenuLugares::set_costo(int precio){
    if(precio == 2){
        ui->label_costo3->hide();
    }else if(precio <= 1){
        ui->label_costo3->hide();
        ui->label_costo2->hide();
    }
}

void MenuLugares::set_calificacion(int calificacion){
    if(calificacion == 3){
        ui->label_estrella4->hide();
    }else if(calificacion == 2){
        ui->label_estrella4->hide();
        ui->label_estrella3->hide();
    }else if(calificacion == 1){
        ui->label_estrella4->hide();
        ui->label_estrella3->hide();
        ui->label_estrella2->hide();
    }else if(calificacion == 0){
        ui->label_estrella4->hide();
        ui->label_estrella3->hide();
        ui->label_estrella2->hide();
        ui->label_estrella1->hide();
    }
}

void MenuLugares::set_municipio(int lugar){
    if(lugar == 1){
        ui->label_lugar->setText("Guadalajara");
    }else if(lugar == 2){
        ui->label_lugar->setText("Tlaquepaque");
    }else if(lugar == 3){
        ui->label_lugar->setText("Tlajomulco");
    }else if(lugar == 4){
        ui->label_lugar->setText("Zapopan");
    }else if(lugar == 5){
        ui->label_lugar->setText("Tonalá");}
}
