/********************************************************************************
** Form generated from reading UI file 'micuenta.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MICUENTA_H
#define UI_MICUENTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_MiCuenta
{
public:

    void setupUi(QDialog *MiCuenta)
    {
        if (MiCuenta->objectName().isEmpty())
            MiCuenta->setObjectName(QString::fromUtf8("MiCuenta"));
        MiCuenta->resize(400, 300);

        retranslateUi(MiCuenta);

        QMetaObject::connectSlotsByName(MiCuenta);
    } // setupUi

    void retranslateUi(QDialog *MiCuenta)
    {
        MiCuenta->setWindowTitle(QApplication::translate("MiCuenta", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MiCuenta: public Ui_MiCuenta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MICUENTA_H
