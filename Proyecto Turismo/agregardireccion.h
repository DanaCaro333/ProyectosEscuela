#ifndef AGREGARDIRECCION_H
#define AGREGARDIRECCION_H

#include <QDialog>

namespace Ui {
class AgregarDireccion;
}

class AgregarDireccion : public QDialog
{
    Q_OBJECT

public:
    explicit AgregarDireccion(QWidget *parent = nullptr);
    explicit AgregarDireccion(int idLugar);
    ~AgregarDireccion();

private slots:
    void on_pushButton_atras_clicked();

    void on_pushButton_clicked();

    void on_buttonBox_accepted();

private:
    Ui::AgregarDireccion *ui;
    int id_lugar;
};

#endif // AGREGARDIRECCION_H
