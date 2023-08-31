#ifndef SUCURSALES_H
#define SUCURSALES_H

#include <QWidget>

namespace Ui {
class Sucursales;
}

class Sucursales : public QWidget
{
    Q_OBJECT

public:
    explicit Sucursales(QWidget *parent = nullptr);
    ~Sucursales();
    void rellenar(int id);

private slots:
    void on_pushButton_eliminar_clicked();

private:
    Ui::Sucursales *ui;
    int id_direccion;
    QString set_municipio(int lugar);
};

#endif // SUCURSALES_H
