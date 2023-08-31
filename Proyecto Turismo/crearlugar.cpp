#include "crearlugar.h"
#include "ui_crearlugar.h"
#include "adminlugar.h"
#include "confirmacion.h"
#include "fotos.h"
#include "string"
#include "crearadministrador.h"
#include "agregardireccion.h"
#include "sucursales.h"
#include "session.h"
#include <QSqlError>
#include <QString>

CrearLugar::CrearLugar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CrearLugar)
{

}

CrearLugar::CrearLugar(int idLugar) :
    ui(new Ui::CrearLugar)
{
    ui->setupUi(this);
    ui->comboBox_lugar->addItem(" ");
    ui->comboBox_lugar->addItem("Comida");
    ui->comboBox_lugar->addItem("Autoservicio");
    ui->comboBox_lugar->addItem("Actividades");
    ui->comboBox_lugar->addItem("Cultural");
    ui->comboBox_lugar->addItem("Salud");
    id_lugar = idLugar;
    mostrar_sucursales(id_lugar);

}

void CrearLugar::rellenar()
{
    QSqlQuery num("SELECT * FROM Lugar WHERE id_lugar = "+QString::number(id_lugar)+";");
    num.next();
    QString nombre = num.value(2).toString();
    QString horario = num.value(3).toString();
    QString telefono = num.value(4).toString();
    int costo = num.value(5).toInt();
    int tipo = num.value(6).toInt();
    QString descripcion = num.value(7).toString();

    ui->comboBox_lugar->setCurrentIndex(tipo);
    switch (costo) {
    case 1:
        ui->radioButton_1->isChecked();
        break;
    case 2:
        ui->radioButton_2->isChecked();
        break;
    case 3:
        ui->radioButton_3->isChecked();
        break;
    }
    ui->lineEdit_telefono->setText(telefono);
    ui->lineEdit_nombre->setText(nombre);
}

CrearLugar::~CrearLugar()
{
    delete ui;
}

void CrearLugar::mostrar_sucursales(int id_lugar){
    ui->label_null->hide();
    QVBoxLayout *lay = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents_sucursales->layout());
    QSqlQuery num("SELECT COUNT(*) FROM Sucursal WHERE id_lugar = "+QString::number(id_lugar)+";");
    num.next();
    int cantidad = num.value(0).toInt();
    if(cantidad > 0){
        QSqlQuery id_direccion("SELECT id_direccion FROM Sucursal WHERE id_lugar = "+QString::number(id_lugar)+";");
        for(int i = 0; i < cantidad; ++i){
            id_direccion.next();
            int idDireccion = id_direccion.value(0).toInt();
            Sucursales *muestra = new Sucursales(this);
            muestra->rellenar(idDireccion);
            lay->addWidget(muestra);
        }
        ui->scrollAreaWidgetContents_sucursales->setLayout(lay);
    }
}
void CrearLugar::agregar_sucursal(){
    ui->label_null->hide();
    QVBoxLayout *lay = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents_sucursales->layout());

    QSqlQuery agregado("SELECT LAST_INSERT_ID()");
    agregado.next();
    int idDireccion = agregado.value(0).toInt();
    Sucursales *muestra = new Sucursales(this);
    muestra->rellenar(idDireccion);
    lay->addWidget(muestra);
    ui->scrollAreaWidgetContents_sucursales->setLayout(lay);
}


void CrearLugar::on_pushButton_atras_clicked()
{
    this -> hide();
    CrearAdministrador crearadmin;
    crearadmin.setModal(true);
    crearadmin.exec();
}

void CrearLugar::on_pushButton_galeria_clicked()
{
    int idLugar = id_lugar;
    Fotos galeria(idLugar);
    galeria.setModal(true);
    galeria.exec();
}

void CrearLugar::on_pushButton_agregardireccion_clicked()
{
    int idLugar = id_lugar;
    AgregarDireccion addplace(idLugar);
    addplace.setModal(true);
    addplace.exec();
    agregar_sucursal();
}

QString CrearLugar::crear_horario()
{
    QString horario;

    if(ui->checkBox_L->isChecked()){
        horario = horario+"xxxxxxxxxx";
    }else{
      horario = ui->timeEdit_LA->text() + ui->timeEdit_LC->text();
    }
    if(ui->checkBox_M->isChecked()){
        horario = horario+"xxxxxxxxxx";
    }else{
      horario = horario+ui->timeEdit_MA->text() + ui->timeEdit_MC->text();
    }
    if(ui->checkBox_I->isChecked()){
        horario = horario+"xxxxxxxxxx";
    }else{
      horario = horario+ui->timeEdit_IA->text() + ui->timeEdit_IC->text();
    }
    if(ui->checkBox_J->isChecked()){
        horario = horario+"xxxxxxxxxx";
    }else{
      horario = horario+ui->timeEdit_JA->text() + ui->timeEdit_JC->text();
    }
    if(ui->checkBox_V->isChecked()){
        horario = horario+"xxxxxxxxxx";
    }else{
      horario = horario+ui->timeEdit_VA->text() + ui->timeEdit_VC->text();
    }
    if(ui->checkBox_S->isChecked()){
        horario = horario+"xxxxxxxxxx";
    }else{
      horario = horario+ui->timeEdit_SA->text() + ui->timeEdit_SC->text();
    }if(ui->checkBox_D->isChecked()){
        horario = horario+"xxxxxxxxxx";
    }else{
      horario = horario+ui->timeEdit_DA->text() + ui->timeEdit_DC->text();
    }
    return horario;

}

void CrearLugar::on_radioButton_1_clicked()
{
    costo = 1;
}

void CrearLugar::on_radioButton_2_clicked()
{
    costo = 2;
}

void CrearLugar::on_radioButton_3_clicked()
{
    costo = 3;
}

void CrearLugar::on_checkBox_L_stateChanged(int arg1)
{
    if(ui->checkBox_L->isChecked()){
        ui->timeEdit_LA->setDisabled(true);
        ui->timeEdit_LC->setDisabled(true);
    }else{
        ui->timeEdit_LA->setEnabled(true);
        ui->timeEdit_LC->setEnabled(true);
    }
}

void CrearLugar::on_checkBox_M_stateChanged(int arg1)
{
    if(ui->checkBox_M->isChecked()){
        ui->timeEdit_MA->setDisabled(true);
        ui->timeEdit_MC->setDisabled(true);
    }else{
        ui->timeEdit_MA->setEnabled(true);
        ui->timeEdit_MC->setEnabled(true);
    }
}
void CrearLugar::on_checkBox_I_stateChanged(int arg1)
{
    if(ui->checkBox_I->isChecked()){
        ui->timeEdit_IA->setDisabled(true);
        ui->timeEdit_IC->setDisabled(true);
    }else{
        ui->timeEdit_IA->setEnabled(true);
        ui->timeEdit_IC->setEnabled(true);
    }
}

void CrearLugar::on_checkBox_J_stateChanged(int arg1)
{
    if(ui->checkBox_J->isChecked()){
        ui->timeEdit_JA->setDisabled(true);
        ui->timeEdit_JC->setDisabled(true);
    }else{
        ui->timeEdit_JA->setEnabled(true);
        ui->timeEdit_JC->setEnabled(true);
    }
}
void CrearLugar::on_checkBox_V_stateChanged(int arg1)
{
    if(ui->checkBox_V->isChecked()){
        ui->timeEdit_VA->setDisabled(true);
        ui->timeEdit_VC->setDisabled(true);
    }else{
        ui->timeEdit_VA->setEnabled(true);
        ui->timeEdit_VC->setEnabled(true);
    }
}

void CrearLugar::on_checkBox_S_stateChanged(int arg1)
{
    if(ui->checkBox_S->isChecked()){
        ui->timeEdit_SA->setDisabled(true);
        ui->timeEdit_SC->setDisabled(true);
    }else{
        ui->timeEdit_SA->setEnabled(true);
        ui->timeEdit_SC->setEnabled(true);
    }
}
void CrearLugar::on_checkBox_D_stateChanged(int arg1)
{
    if(ui->checkBox_D->isChecked()){
        ui->timeEdit_DA->setDisabled(true);
        ui->timeEdit_DC->setDisabled(true);
    }else{
        ui->timeEdit_DA->setEnabled(true);
        ui->timeEdit_DC->setEnabled(true);
    }
}


void CrearLugar::on_pushButton_aceptar_clicked()
{
    int idLugar = id_lugar;
    int mcosto = costo;
    int tipo = ui ->comboBox_lugar->currentIndex();
    QString descripcion = ui ->plainTextEdit_descripcion->toPlainText();
    QString nombre = ui ->lineEdit_nombre->text();
    QString telefono = ui ->lineEdit_telefono->text();
    QString horario = crear_horario();
    if(nombre == "" || tipo == 0 || mcosto == 0){
        QMessageBox::information(this,"Advertencia","Es necesario llenar todos los campos");
    }else{
        QSqlQuery query;
        auto done = query.exec("UPDATE Lugar SET nombre = '"+nombre+"', horario = '"+horario+"', telefono = '"+telefono+"', costo = "+QString::number(mcosto)+", tipo = "+QString::number(tipo)+", descripcion = '"+descripcion+"' WHERE id_lugar = "+QString::number(idLugar)+"");
        if(done){
            QMessageBox::information(this,"Negocio nuevo","Lugar creado correctamente");
        }else{
            QSqlError x = query.lastError();
            QMessageBox::information(this, "no", x.text());
        }
        QSqlQuery user("SELECT LAST_INSERT_ID()");
        user.next();
        Session::get()->set_user_id(user.value(0).toInt());
        this->hide();
        Adminlugar principalAdmin;
        principalAdmin.setModal(true);
        principalAdmin.exec();
    }

}
