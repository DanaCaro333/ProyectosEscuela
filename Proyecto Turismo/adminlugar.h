#ifndef ADMINLUGAR_H
#define ADMINLUGAR_H

#include <QDialog>

namespace Ui {
class Adminlugar;
}

class Adminlugar : public QDialog
{
    Q_OBJECT

public:
    explicit Adminlugar(QWidget *parent = nullptr);
    ~Adminlugar();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_cerrar_clicked();

private:
    Ui::Adminlugar *ui;
    int id_admin;
    void comentarios(int idLugar);
};

#endif // ADMINLUGAR_H
