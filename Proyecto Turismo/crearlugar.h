#ifndef CREARLUGAR_H
#define CREARLUGAR_H
#include <regex>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QDialog>
#include <QVBoxLayout>

namespace Ui {
class CrearLugar;
}

class CrearLugar : public QDialog
{
    Q_OBJECT

public:
    explicit CrearLugar(QWidget *parent = nullptr);
    CrearLugar(int id_lugar);
    ~CrearLugar();
    void mostrar_sucursales(int id_lugar);
    void agregar_sucursal();
    void rellenar();

private slots:
    void on_pushButton_atras_clicked();

    void on_pushButton_agregar_clicked();

    void on_pushButton_galeria_clicked();

    void on_pushButton_agregardireccion_clicked();

    void on_radioButton_1_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_checkBox_L_stateChanged(int arg1);

    void on_checkBox_M_stateChanged(int arg1);
    void on_checkBox_I_stateChanged(int arg1);

    void on_checkBox_J_stateChanged(int arg1);
    void on_checkBox_V_stateChanged(int arg1);

    void on_checkBox_S_stateChanged(int arg1);
    void on_checkBox_D_stateChanged(int arg1);

    void on_pushButton_aceptar_clicked();

private:
    Ui::CrearLugar *ui;
    int id_lugar;
    int id_admin;
    int costo;

    bool verificar();
    QString crear_horario();
    QString set_municipio(int lugar);
};

#endif // CREARLUGAR_H
