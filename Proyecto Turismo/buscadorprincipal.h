#ifndef BUSCADORPRINCIPAL_H
#define BUSCADORPRINCIPAL_H
#include <QDialog>
#include <QMessageBox>
namespace Ui {
class BuscadorPrincipal;
}

class BuscadorPrincipal : public QDialog
{
    Q_OBJECT

public:
    explicit BuscadorPrincipal(QWidget *parent = nullptr);
    ~BuscadorPrincipal();

private slots:

    void on_pushButton_comida_clicked();

    void on_pushButton_micuenta_clicked();

    void on_pushButton_autoservicio_clicked();

    void on_pushButton_cultural_clicked();

    void on_pushButton_natural_clicked();

    void on_pushButton_salud_clicked();

    void on_pushButton_cerrar_clicked();

private:
    Ui::BuscadorPrincipal *ui;
    int id_usuario;
};

#endif // BUSCADORPRINCIPAL_H
