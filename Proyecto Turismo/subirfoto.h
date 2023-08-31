#ifndef SUBIRFOTO_H
#define SUBIRFOTO_H
#include <QFileDialog>
#include <QDialog>
#include <QSqlQuery>
#include <QMessageBox>
#include <QCompleter>
#include <QFileSystemModel>
namespace Ui {
class SubirFoto;
}

class SubirFoto : public QDialog
{
    Q_OBJECT

public:
    explicit SubirFoto(QWidget *parent = nullptr);
    explicit SubirFoto(int id);
    ~SubirFoto();

private slots:
    void on_pushButton_agregar_clicked();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_pushButton_clicked();

    void on_pushButton_listo_clicked();

private:
    Ui::SubirFoto *ui;
    int id_lugar;
    QString filename;
};

#endif // SUBIRFOTO_H
