#ifndef MENULUGARES_H
#define MENULUGARES_H

#include <QDialog>
#include <QPixmap>

namespace Ui {
class MenuLugares;
}

class MenuLugares : public QDialog
{
    Q_OBJECT

public:
    explicit MenuLugares(QWidget *parent = nullptr);
    explicit MenuLugares(int tipo, int lugar, int costo, int estrella);
    ~MenuLugares();
    void mostrar(int tipo, int lugar, int costo, int calif);

private slots:
    void on_pushButton_atras_clicked();

private:
    int opc;
    Ui::MenuLugares *ui;
    bool filtrarMunicipio(int municipio, int id_lugar);
    void set_costo(int precio);
    void set_calificacion(int calificacion);
    void set_municipio(int lugar);
};

#endif // MENULUGARES_H
