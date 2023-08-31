#ifndef PAGINAPRINCIPAL_H
#define PAGINAPRINCIPAL_H
#include <QtSql>
#include <QSqlDatabase>
#include <QDialog>
#include <QMessageBox>

namespace Ui {
class PaginaPrincipal;
}

class PaginaPrincipal : public QDialog
{
    Q_OBJECT

public:
    explicit PaginaPrincipal(QWidget *parent = nullptr);
    ~PaginaPrincipal();

private slots:
    void on_pushButton_negocio_clicked();

    void on_pushButton_usuario_clicked();

private:
    Ui::PaginaPrincipal *ui;
};

#endif // PAGINAPRINCIPAL_H
