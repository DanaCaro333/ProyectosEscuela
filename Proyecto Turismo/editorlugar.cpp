#include "editorlugar.h"
#include "ui_editorlugar.h"
#include "confirmacion.h"
#include "buscadorprincipal.h"
#include "editarlugar.h"
#include "fotos.h"
#include "agregardireccion.h"

EditorLugar::EditorLugar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditorLugar)
{
    ui->setupUi(this);
}

EditorLugar::~EditorLugar()
{
    delete ui;
}

void EditorLugar::on_pushButton_actualizar_clicked()
{
    Confirmacion confirmado;
    confirmado.setModal(true);
    confirmado.exec();
    this -> hide();
    EditarLugar editar;
    editar.setModal(true);
    editar.exec();
}

void EditorLugar::on_pushButton_atras_clicked()
{
    this -> hide();
    BuscadorPrincipal buscador;
    buscador.setModal(true);
    buscador.exec();
}

void EditorLugar::on_pushButton_galeria_clicked()
{
    this -> hide();
    Fotos galeria;
    galeria.setModal(true);
    galeria.exec();
}

void EditorLugar::on_pushButton_agregardireccion_clicked()
{
    this -> hide();
    AgregarDireccion direccion;
    direccion.setModal(true);
    direccion.exec();
}
