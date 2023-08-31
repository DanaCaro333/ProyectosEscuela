#ifndef INICIARSESION_H
#define INICIARSESION_H

#include <QDialog>

namespace Ui {
class IniciarSesion;
}

class IniciarSesion : public QDialog
{
    Q_OBJECT

public:
    explicit IniciarSesion(QWidget *parent = nullptr);
    explicit IniciarSesion(int opcion);
    ~IniciarSesion();

private slots:

    void on_pushButton_atras_clicked();

    void on_pushButton_iniciar_2_clicked();

    void on_pushButton_iniciar_clicked();

private:
    Ui::IniciarSesion *ui;
    int opc;
    QString usuario;
    QString password;
    void buscar();
};

#endif // INICIARSESION_H
