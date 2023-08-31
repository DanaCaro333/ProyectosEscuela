#include "confirmacion.h"
#include "ui_confirmacion.h"

Confirmacion::Confirmacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Confirmacion)
{
    ui->setupUi(this);
}

Confirmacion::~Confirmacion()
{
    delete ui;
}
