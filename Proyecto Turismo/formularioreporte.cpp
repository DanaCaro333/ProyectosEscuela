#include "formularioreporte.h"
#include "ui_formularioreporte.h"

FormularioReporte::FormularioReporte(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormularioReporte)
{
    ui->setupUi(this);
}

FormularioReporte::~FormularioReporte()
{
    delete ui;
}

void FormularioReporte::on_buttonBox_accepted()
{
    this -> hide();
}
