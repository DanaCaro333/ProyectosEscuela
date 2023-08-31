#include "detallereporte.h"
#include "ui_detallereporte.h"

DetalleReporte::DetalleReporte(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DetalleReporte)
{
    ui->setupUi(this);
}

DetalleReporte::~DetalleReporte()
{
    delete ui;
}
