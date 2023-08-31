#ifndef EDITORLUGAR_H
#define EDITORLUGAR_H

#include <QDialog>

namespace Ui {
class EditorLugar;
}

class EditorLugar : public QDialog
{
    Q_OBJECT

public:
    explicit EditorLugar(QWidget *parent = nullptr);
    ~EditorLugar();

private slots:
    void on_pushButton_actualizar_clicked();

    void on_pushButton_atras_clicked();

    void on_pushButton_galeria_clicked();

    void on_pushButton_agregardireccion_clicked();

private:
    Ui::EditorLugar *ui;
};

#endif // EDITORLUGAR_H
