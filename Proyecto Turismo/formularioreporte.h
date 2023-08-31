#ifndef FORMULARIOREPORTE_H
#define FORMULARIOREPORTE_H

#include <QDialog>

namespace Ui {
class FormularioReporte;
}

class FormularioReporte : public QDialog
{
    Q_OBJECT

public:
    explicit FormularioReporte(QWidget *parent = nullptr);
    ~FormularioReporte();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::FormularioReporte *ui;
};

#endif // FORMULARIOREPORTE_H
