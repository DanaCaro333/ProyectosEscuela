#ifndef MICUENTA_H
#define MICUENTA_H

#include <QDialog>

namespace Ui {
class MiCuenta;
}

class MiCuenta : public QDialog
{
    Q_OBJECT

public:
    explicit MiCuenta(QWidget *parent = nullptr);
    ~MiCuenta();

private:
    Ui::MiCuenta *ui;
};

#endif // MICUENTA_H
