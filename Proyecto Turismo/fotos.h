#ifndef FOTOS_H
#define FOTOS_H

#include <QDialog>

namespace Ui {
class Fotos;
}

class Fotos : public QDialog
{
    Q_OBJECT

public:
    explicit Fotos(QWidget *parent = nullptr);
    explicit Fotos(int id);
    ~Fotos();
    void mostrar(int id_lugar);
    void agregar_foto(int id_lugar);

private slots:
    void on_pushButton_actualizar_clicked();

    void on_pushButton_agregar_clicked();

    void on_pushButton_eliminar_clicked();

    void on_pushButton_atras_clicked();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_pushButton_clicked();

private:
    Ui::Fotos *ui;
    int id_lugar;
};

#endif // FOTOS_H
