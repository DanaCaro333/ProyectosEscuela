#include "adminlugar.h"
#include "buscadorprincipal.h"
#include "crearlugar.h"
#include "lugarfiltros.h"
#include "mostrarlugar.h"
#include "menulugares.h"
#include "subirfoto.h"
#include "paginaprincipal.h"
#include "reporte.h"
#include "editarlugar.h"



#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PaginaPrincipal w;
    w.show();
    return a.exec();
}
