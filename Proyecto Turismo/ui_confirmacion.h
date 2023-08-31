/********************************************************************************
** Form generated from reading UI file 'confirmacion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMACION_H
#define UI_CONFIRMACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Confirmacion
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Confirmacion)
    {
        if (Confirmacion->objectName().isEmpty())
            Confirmacion->setObjectName(QString::fromUtf8("Confirmacion"));
        Confirmacion->resize(387, 270);
        Confirmacion->setStyleSheet(QString::fromUtf8("background-color: rgb(171, 166, 211);"));
        label = new QLabel(Confirmacion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 220, 351, 17));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Confirmacion);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 30, 141, 151));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../Pictures/paloma.png")));

        retranslateUi(Confirmacion);

        QMetaObject::connectSlotsByName(Confirmacion);
    } // setupUi

    void retranslateUi(QDialog *Confirmacion)
    {
        Confirmacion->setWindowTitle(QApplication::translate("Confirmacion", "Dialog", nullptr));
        label->setText(QApplication::translate("Confirmacion", "Movimiento completado con exito!", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Confirmacion: public Ui_Confirmacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMACION_H
