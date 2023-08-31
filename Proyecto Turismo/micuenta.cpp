#include "micuenta.h"
#include "ui_micuenta.h"

MiCuenta::MiCuenta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MiCuenta)
{
    ui->setupUi(this);
}

MiCuenta::~MiCuenta()
{
    delete ui;
}
