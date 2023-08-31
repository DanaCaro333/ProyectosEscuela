/********************************************************************************
** Form generated from reading UI file 'paginaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGINAPRINCIPAL_H
#define UI_PAGINAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PaginaPrincipal
{
public:
    QLabel *label_7;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_usuario;
    QPushButton *pushButton_negocio;

    void setupUi(QDialog *PaginaPrincipal)
    {
        if (PaginaPrincipal->objectName().isEmpty())
            PaginaPrincipal->setObjectName(QString::fromUtf8("PaginaPrincipal"));
        PaginaPrincipal->resize(706, 598);
        PaginaPrincipal->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        label_7 = new QLabel(PaginaPrincipal);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(100, 10, 511, 151));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../Pictures/logojalisco.png")));
        label = new QLabel(PaginaPrincipal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 220, 221, 231));
        label->setPixmap(QPixmap(QString::fromUtf8("../Pictures/lupa.png")));
        label_2 = new QLabel(PaginaPrincipal);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(390, 240, 211, 201));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../Pictures/tienda.png")));
        pushButton_usuario = new QPushButton(PaginaPrincipal);
        pushButton_usuario->setObjectName(QString::fromUtf8("pushButton_usuario"));
        pushButton_usuario->setGeometry(QRect(100, 490, 131, 25));
        pushButton_negocio = new QPushButton(PaginaPrincipal);
        pushButton_negocio->setObjectName(QString::fromUtf8("pushButton_negocio"));
        pushButton_negocio->setGeometry(QRect(420, 490, 161, 25));

        retranslateUi(PaginaPrincipal);

        QMetaObject::connectSlotsByName(PaginaPrincipal);
    } // setupUi

    void retranslateUi(QDialog *PaginaPrincipal)
    {
        PaginaPrincipal->setWindowTitle(QApplication::translate("PaginaPrincipal", "Dialog", nullptr));
        label_7->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        pushButton_usuario->setText(QApplication::translate("PaginaPrincipal", "Buscar un lugar", nullptr));
        pushButton_negocio->setText(QApplication::translate("PaginaPrincipal", "Mi negocio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PaginaPrincipal: public Ui_PaginaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGINAPRINCIPAL_H
