#ifndef VALORACION_H
#define VALORACION_H

#include <QDialog>

namespace Ui {
class Valoracion;
}

class Valoracion : public QDialog
{
    Q_OBJECT

public:
    explicit Valoracion(QWidget *parent = nullptr);
    explicit Valoracion(int id_lugar);
    ~Valoracion();

private slots:
    void on_pushButton_enviar_clicked();

    void on_pushButton_atras_clicked();

private:
    Ui::Valoracion *ui;
    int idLugar;
};

#endif // VALORACION_H
