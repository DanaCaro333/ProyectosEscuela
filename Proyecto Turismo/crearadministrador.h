#ifndef CREARADMINISTRADOR_H
#define CREARADMINISTRADOR_H

#include <QDialog>

namespace Ui {
class CrearAdministrador;
}

class CrearAdministrador : public QDialog
{
    Q_OBJECT

public:
    explicit CrearAdministrador(QWidget *parent = nullptr);
    ~CrearAdministrador();

private slots:
    void on_pushButton_atras_clicked();

    void on_pushButton_crearLugar_clicked();

private:
    Ui::CrearAdministrador *ui;
};

#endif // CREARADMINISTRADOR_H
