#include "mostrarlugar.h"
#include "ui_mostrarlugar.h"
#include "formularioreporte.h"
#include "menulugares.h"
#include "valoracion.h"
#include "comentario.h"
#include "crearlugar.h"
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QDialog>

MostrarLugar::MostrarLugar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MostrarLugar)
{
    ui->setupUi(this);
}

MostrarLugar::MostrarLugar(int id, int user) :
    ui(new Ui::MostrarLugar)
{
    ui->setupUi(this);
    id_lugar = id;
    if(user == 1){
        ui->pushButton_editar->hide();
    }else if (user == 2){
        ui->pushButton_opinion->hide();
    }
    mostrar(id_lugar);
}
void MostrarLugar::mostrar(int idLugar){
    QSqlQuery name("SELECT nombre FROM Lugar WHERE id_lugar = "+QString::number(idLugar)+";");
    name.next();
    QString nombre = name.value(0).toString();
    ui->label_nombre->setText(nombre);
    QSqlQuery tel("SELECT telefono FROM Lugar WHERE id_lugar = "+QString::number(idLugar)+";");
    tel.next();
    QString telefono = tel.value(0).toString();
    ui->label_telefono->setText(telefono);
    QSqlQuery des("SELECT descripcion FROM Lugar WHERE id_lugar = "+QString::number(idLugar)+";");
    des.next();
    QString descripcion = des.value(0).toString();
    ui->textBrowser_descripcion->setText(descripcion);
    CrearHorario(idLugar);
    costo(idLugar);
    calificacion(idLugar);
    sucursales(idLugar);
    comentarios(idLugar);
}

void MostrarLugar::CrearHorario(int idLugar){
    QSqlQuery dias("SELECT horario FROM Lugar WHERE id_lugar = "+QString::number(idLugar)+";");
    dias.next();
    QString horario = dias.value(0).toString();
    QStringRef lunesA(&horario, 0, 5);
    QStringRef lunesC(&horario, 5, 5);
    QStringRef martesA(&horario, 10, 5);
    QStringRef martesC(&horario, 15, 5);
    QStringRef miercolesA(&horario, 20, 5);
    QStringRef miercolesC(&horario, 25, 5);
    QStringRef JuevesA(&horario, 30, 5);
    QStringRef JuevesC(&horario, 35, 5);
    QStringRef ViernesA(&horario, 40, 5);
    QStringRef ViernesC(&horario, 45, 5);
    QStringRef SabadoA(&horario, 50, 5);
    QStringRef SabadoC(&horario, 55, 5);
    QStringRef DomingoA(&horario, 60, 5);
    QStringRef DomingoC(&horario, 65, 5);
    QChar cerrado = 'x';

    if(lunesA[0] != cerrado){
        ui->label_lunes->setText(lunesA+" - "+lunesC);
    }else{
        ui->label_lunes->setText(" CERRADO ");
        ui->label_lunes->setStyleSheet("background-color: rgb(228, 142, 142)");
    }
    if(martesA[0] != cerrado){
        ui->label_martes->setText(martesA+" - "+martesC);
    }else{
        ui->label_martes->setText(" CERRADO ");
        ui->label_martes->setStyleSheet("background-color: rgb(228, 142, 142)");
    }

    if(miercolesA[0] != cerrado){
        ui->label_miercoles->setText(miercolesA+" - "+miercolesC);
    }else{
        ui->label_miercoles->setText(" CERRADO ");
        ui->label_miercoles->setStyleSheet("background-color: rgb(228, 142, 142)");
    }

    if(JuevesA[0] != cerrado){
        ui->label_jueves->setText(JuevesA+" - "+JuevesC);
    }else{
        ui->label_jueves->setText(" CERRADO ");
        ui->label_jueves->setStyleSheet("background-color: rgb(228, 142, 142)");
    }

    if(ViernesA[0] != cerrado){
        ui->label_viernes->setText(ViernesA+" - "+ViernesC);
    }else{
        ui->label_viernes->setText(" CERRADO ");
        ui->label_viernes->setStyleSheet("background-color: rgb(228, 142, 142)");
    }

    if(SabadoA[0] != cerrado){
        ui->label_sabado->setText(SabadoA+" - "+SabadoC);
    }else{
        ui->label_sabado->setText(" CERRADO ");
        ui->label_sabado->setStyleSheet("background-color: rgb(228, 142, 142)");
    }

    if(DomingoA[0] != cerrado){
        ui->label_domingo->setText(DomingoA+" - "+DomingoC);
    }else{
        ui->label_domingo->setText(" CERRADO ");
        ui->label_domingo->setStyleSheet("background-color: rgb(228, 142, 142)");
    }
}


void MostrarLugar::costo(int idLugar){

    QSqlQuery costo("SELECT costo FROM Lugar WHERE id_lugar = "+QString::number(idLugar)+";");
    costo.next();
    int precio = costo.value(0).toInt();

    if(precio == 2){
        ui->label_costo3->hide();
    }else if(precio <= 1){
        ui->label_costo3->hide();
        ui->label_costo2->hide();
    }
}

void MostrarLugar::calificacion(int idLugar){

    QSqlQuery estrella("SELECT calif FROM Lugar WHERE id_lugar = "+QString::number(idLugar)+";");
    estrella.next();
    int calificacion = estrella.value(0).toInt();

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

void MostrarLugar::sucursales(int idLugar){
    QVBoxLayout *lay = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents_sucursales->layout());
    QSqlQuery num("SELECT COUNT(*) FROM Sucursal WHERE id_lugar = "+QString::number(id_lugar)+";");
    num.next();
    int cantidad = num.value(0).toInt();
    if(cantidad > 0){
        QSqlQuery id_direccion("SELECT id_direccion FROM Sucursal WHERE id_lugar = "+QString::number(id_lugar)+";");
        for(int i = 0; i < cantidad; ++i){
            id_direccion.next();
            int idDireccion = id_direccion.value(0).toInt();
            QSqlQuery direccion("SELECT * FROM Direccion WHERE id_direccion = "+QString::number(idDireccion)+";");
            direccion.next();
            int municipio = direccion.value(1).toInt();
            QString colonia = direccion.value(2).toString();
            QString calle = direccion.value(3).toString();
            QString numero = direccion.value(4).toString();
            QString domicilio = calle+" #"+numero+" "+colonia+" "+set_municipio(municipio);
            QLabel *muestra = new QLabel(this);
            muestra->setText(domicilio);
            lay->addWidget(muestra);
        }
        ui->scrollAreaWidgetContents_sucursales->setLayout(lay);
    }
}

QString MostrarLugar::set_municipio(int lugar){
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

void MostrarLugar::comentarios(int idLugar){
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

MostrarLugar::~MostrarLugar()
{
    delete ui;
}

void MostrarLugar::on_pushButton_reporte_clicked()
{
    FormularioReporte reportar;
    reportar.setModal(true);
    reportar.exec();
}

void MostrarLugar::on_pushButton_atras_clicked()
{
    this -> hide();
    MenuLugares lugares;
    lugares.setModal(true);
    lugares.exec();
}

void MostrarLugar::on_pushButton_opinion_clicked()
{
    int idLugar = id_lugar;
    this -> hide();
    Valoracion opinion(idLugar);
    opinion.setModal(true);
    opinion.exec();
}



void MostrarLugar::on_pushButton_iniciar_5_clicked()
{
    this -> hide();
    MostrarLugar lugar;
    lugar.setModal(true);
    lugar.exec();
}

void MostrarLugar::on_pushButton_iniciar_2_clicked()
{
    FormularioReporte reportar;
    reportar.setModal(true);
    reportar.exec();
}

void MostrarLugar::on_pushButton_editar_clicked()
{
    this -> hide();
    CrearLugar lugar(id_lugar);
    lugar.rellenar();
    lugar.setModal(true);
    lugar.exec();
}
