#ifndef ADMINUSUARIO_H
#define ADMINUSUARIO_H

#include <QDialog>

namespace Ui {
class AdminUsuario;
}

class AdminUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit AdminUsuario(QWidget *parent = nullptr);
    explicit AdminUsuario(int id_usuario);
    ~AdminUsuario();

private slots:
    void on_pushButton_detalle_clicked();

    void on_pushButton_editar_clicked();

private:
    Ui::AdminUsuario *ui;
    int idUsuario;
};

#endif // ADMINUSUARIO_H
