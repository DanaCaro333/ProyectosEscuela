#include "reportewidget.h"
#include "ui_reportewidget.h"

Reportewidget::Reportewidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reportewidget)
{
    ui->setupUi(this);
}

Reportewidget::~Reportewidget()
{
    delete ui;
}
