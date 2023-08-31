#ifndef CREARUSUARIO_H
#define CREARUSUARIO_H
#include <QDialog>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <regex>
namespace Ui {
class CrearUsuario;
}

class CrearUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit CrearUsuario(QWidget *parent = nullptr);
    ~CrearUsuario();
    void mostrar_sucursales(int lugar);

private slots:
    void on_pushButton_atras_clicked();

    void on_pushButton_crearUsuario_clicked();

private:
    QString nombre;
    QString apellido;
    QString correo;
    QString usuario;
    QString password;
    Ui::CrearUsuario *ui;
    void validar_datos();
};

#endif // CREARUSUARIO_H
