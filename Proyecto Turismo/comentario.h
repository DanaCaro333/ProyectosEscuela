#ifndef COMENTARIO_H
#define COMENTARIO_H

#include <QWidget>

namespace Ui {
class Comentario;
}

class Comentario : public QWidget
{
    Q_OBJECT

public:
    explicit Comentario(QWidget *parent = nullptr);
    ~Comentario();
    void rellenar(int id);

private slots:

private:
    Ui::Comentario *ui;



};

#endif // COMENTARIO_H
