#ifndef EDITARLUGAR_H
#define EDITARLUGAR_H

#include <QDialog>

namespace Ui {
class EditarLugar;
}

class EditarLugar : public QDialog
{
    Q_OBJECT

public:
    explicit EditarLugar(QWidget *parent = nullptr);
    ~EditarLugar();

private slots:
    void on_pushButton_atras_clicked();

    void on_pushButton_editar_clicked();

private:
    Ui::EditarLugar *ui;
};

#endif // EDITARLUGAR_H
