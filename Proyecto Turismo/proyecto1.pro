QT       += core gui widgets sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminlugar.cpp \
    adminusuario.cpp \
    agregardireccion.cpp \
    buscadorprincipal.cpp \
    comentario.cpp \
    confirmacion.cpp \
    crearadministrador.cpp \
    crearlugar.cpp \
    crearusuario.cpp \
    detallereporte.cpp \
    detallereportel.cpp \
    editarlugar.cpp \
    editarusuario.cpp \
    formularioreporte.cpp \
    fotos.cpp \
    imagen.cpp \
    iniciarsesion.cpp \
    lugar.cpp \
    lugarfiltros.cpp \
    main.cpp \
    menulugares.cpp \
    micuenta.cpp \
    mostrarlugar.cpp \
    paginaprincipal.cpp \
    reporte.cpp \
    reportewidget.cpp \
    session.cpp \
    subirfoto.cpp \
    sucursales.cpp \
    valoracion.cpp

HEADERS += \
    adminlugar.h \
    adminusuario.h \
    agregardireccion.h \
    buscadorprincipal.h \
    comentario.h \
    confirmacion.h \
    crearadministrador.h \
    crearlugar.h \
    crearusuario.h \
    detallereporte.h \
    detallereportel.h \
    editarlugar.h \
    editarusuario.h \
    formularioreporte.h \
    fotos.h \
    imagen.h \
    iniciarsesion.h \
    lugar.h \
    lugarfiltros.h \
    menulugares.h \
    micuenta.h \
    mostrarlugar.h \
    paginaprincipal.h \
    reporte.h \
    reportewidget.h \
    session.h \
    subirfoto.h \
    sucursales.h \
    valoracion.h

FORMS += \
    adminlugar.ui \
    adminusuario.ui \
    agregardireccion.ui \
    buscadorprincipal.ui \
    comentario.ui \
    confirmacion.ui \
    crearadministrador.ui \
    crearlugar.ui \
    crearusuario.ui \
    detallereporte.ui \
    detallereportel.ui \
    editarlugar.ui \
    editarusuario.ui \
    formularioreporte.ui \
    fotos.ui \
    imagen.ui \
    iniciarsesion.ui \
    lugar.ui \
    lugarfiltros.ui \
    menulugares.ui \
    micuenta.ui \
    mostrarlugar.ui \
    paginaprincipal.ui \
    reporte.ui \
    reportewidget.ui \
    subirfoto.ui \
    sucursales.ui \
    valoracion.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
