#ifndef IMAGEN_H
#define IMAGEN_H

#include <QWidget>

namespace Ui {
class Imagen;
}

class Imagen : public QWidget
{
    Q_OBJECT

public:
    explicit Imagen(QWidget *parent = nullptr);
    ~Imagen();
    void rellenar(int idFoto);

private slots:
    void on_pushButton_eliminar_clicked();

    void on_label_foto_linkActivated(const QString &link);

private:
    Ui::Imagen *ui;
    int id_foto;
};

#endif // IMAGEN_H
