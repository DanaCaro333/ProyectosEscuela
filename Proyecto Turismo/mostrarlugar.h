#ifndef MOSTRARLUGAR_H
#define MOSTRARLUGAR_H

#include <QDialog>

namespace Ui {
class MostrarLugar;
}

class MostrarLugar : public QDialog
{
    Q_OBJECT

public:
    explicit MostrarLugar(QWidget *parent = nullptr);
    MostrarLugar(int id, int user);
    void comentarios(int idLugar);
    ~MostrarLugar();

private slots:
    void on_pushButton_reporte_clicked();

    void on_pushButton_atras_clicked();

    void on_pushButton_opinion_clicked();


    void on_pushButton_iniciar_5_clicked();

    void on_pushButton_iniciar_2_clicked();

    void on_pushButton_editar_clicked();

private:
    Ui::MostrarLugar *ui;
    int id_lugar;
    int usuario;
    void mostrar(int idLugar);
    void CrearHorario(int idLugar);
    void costo(int idLugar);
    void calificacion(int idLugar);
    void sucursales(int idLugar);
    QString set_municipio(int municipio);
};

#endif // MOSTRARLUGAR_H
