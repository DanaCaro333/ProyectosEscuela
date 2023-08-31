#include "detallereportel.h"
#include "ui_detallereportel.h"

DetalleReporteL::DetalleReporteL(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DetalleReporteL)
{
    ui->setupUi(this);
}

DetalleReporteL::~DetalleReporteL()
{
    delete ui;
}
