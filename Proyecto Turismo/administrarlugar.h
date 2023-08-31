#ifndef ADMINISTRARLUGAR_H
#define ADMINISTRARLUGAR_H

#include <QDialog>

namespace Ui {
class AdministrarLugar;
}

class AdministrarLugar : public QDialog
{
    Q_OBJECT

public:
    explicit AdministrarLugar(QWidget *parent = nullptr);
    ~AdministrarLugar();

private:
    Ui::AdministrarLugar *ui;
};

#endif // ADMINISTRARLUGAR_H
