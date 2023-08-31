#ifndef REPORTEWIDGET_H
#define REPORTEWIDGET_H

#include <QWidget>

namespace Ui {
class Reportewidget;
}

class Reportewidget : public QWidget
{
    Q_OBJECT

public:
    explicit Reportewidget(QWidget *parent = nullptr);
    ~Reportewidget();

private:
    Ui::Reportewidget *ui;
};

#endif // REPORTEWIDGET_H
