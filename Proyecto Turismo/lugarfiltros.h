#ifndef LUGARFILTROS_H
#define LUGARFILTROS_H
#include <QPixmap>
#include <QDialog>

using namespace std;

namespace Ui {
class LugarFiltros;
}

class LugarFiltros : public QDialog
{
    Q_OBJECT

public:
    explicit LugarFiltros(QWidget *parent = nullptr);
    explicit LugarFiltros(int opcion);
    ~LugarFiltros();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_atras_clicked();

private:
    int tipo;
    Ui::LugarFiltros *ui;
};

#endif // LUGARFILTROS_H
