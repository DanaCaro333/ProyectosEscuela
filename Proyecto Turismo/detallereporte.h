#ifndef DETALLEREPORTE_H
#define DETALLEREPORTE_H

#include <QDialog>

namespace Ui {
class DetalleReporte;
}

class DetalleReporte : public QDialog
{
    Q_OBJECT

public:
    explicit DetalleReporte(QWidget *parent = nullptr);
    ~DetalleReporte();

private:
    Ui::DetalleReporte *ui;
};

#endif // DETALLEREPORTE_H
