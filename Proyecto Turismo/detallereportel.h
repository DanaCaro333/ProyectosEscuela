#ifndef DETALLEREPORTEL_H
#define DETALLEREPORTEL_H

#include <QDialog>

namespace Ui {
class DetalleReporteL;
}

class DetalleReporteL : public QDialog
{
    Q_OBJECT

public:
    explicit DetalleReporteL(QWidget *parent = nullptr);
    ~DetalleReporteL();

private:
    Ui::DetalleReporteL *ui;
};

#endif // DETALLEREPORTEL_H
