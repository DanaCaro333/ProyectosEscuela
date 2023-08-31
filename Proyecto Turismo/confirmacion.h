#ifndef CONFIRMACION_H
#define CONFIRMACION_H

#include <QDialog>

namespace Ui {
class Confirmacion;
}

class Confirmacion : public QDialog
{
    Q_OBJECT

public:
    explicit Confirmacion(QWidget *parent = nullptr);
    ~Confirmacion();

private:
    Ui::Confirmacion *ui;
};

#endif // CONFIRMACION_H
