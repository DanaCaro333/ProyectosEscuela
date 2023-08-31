#ifndef USUARIO_H
#define USUARIO_H

#include <QDialog>

namespace Ui {
class Usuario;
}

class Usuario : public QDialog
{
    Q_OBJECT

public:
    explicit Usuario(QWidget *parent = nullptr);
    ~Usuario();

private:
    Ui::Usuario *ui;
};

#endif // USUARIO_H
