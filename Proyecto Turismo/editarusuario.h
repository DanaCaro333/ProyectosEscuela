#ifndef EDITARUSUARIO_H
#define EDITARUSUARIO_H

#include <QDialog>

namespace Ui {
class EditarUsuario;
}

class EditarUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit EditarUsuario(QWidget *parent = nullptr);
    ~EditarUsuario();

private:
    Ui::EditarUsuario *ui;
};

#endif // EDITARUSUARIO_H
