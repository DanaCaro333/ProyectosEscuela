#include "editarusuario.h"
#include "ui_editarusuario.h"

EditarUsuario::EditarUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditarUsuario)
{
    ui->setupUi(this);
}

EditarUsuario::~EditarUsuario()
{
    delete ui;
}
