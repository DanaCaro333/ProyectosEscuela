#ifndef LUGAR_H
#define LUGAR_H

#include <QWidget>

namespace Ui {
class Lugar;
}

class Lugar : public QWidget
{
    Q_OBJECT

public:
    explicit Lugar(QWidget *parent = nullptr);
    ~Lugar();
    void rellenar(int id);

private slots:
    void on_pushButton_ver_clicked();

private:
    Ui::Lugar *ui;
    int idLugar;
};

#endif // LUGAR_H
