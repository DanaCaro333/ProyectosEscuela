#include "editarlugar.h"
#include "ui_editarlugar.h"
#include "editorlugar.h"
#include "buscadorprincipal.h"

EditarLugar::EditarLugar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditarLugar)
{
    ui->setupUi(this);
}

EditarLugar::~EditarLugar()
{
    delete ui;
}

void EditarLugar::on_pushButton_atras_clicked()
{
    this -> hide();
    BuscadorPrincipal buscador;
    buscador.setModal(true);
    buscador.exec();
}

