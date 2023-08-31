/********************************************************************************
** Form generated from reading UI file 'sucursales.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUCURSALES_H
#define UI_SUCURSALES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sucursales
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QPushButton *pushButton_eliminar;

    void setupUi(QWidget *Sucursales)
    {
        if (Sucursales->objectName().isEmpty())
            Sucursales->setObjectName(QString::fromUtf8("Sucursales"));
        Sucursales->resize(491, 43);
        formLayout = new QFormLayout(Sucursales);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(Sucursales);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        pushButton_eliminar = new QPushButton(Sucursales);
        pushButton_eliminar->setObjectName(QString::fromUtf8("pushButton_eliminar"));
        pushButton_eliminar->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 195, 195);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton_eliminar);


        retranslateUi(Sucursales);

        QMetaObject::connectSlotsByName(Sucursales);
    } // setupUi

    void retranslateUi(QWidget *Sucursales)
    {
        Sucursales->setWindowTitle(QApplication::translate("Sucursales", "Form", nullptr));
        label->setText(QApplication::translate("Sucursales", "TextLabel", nullptr));
        pushButton_eliminar->setText(QApplication::translate("Sucursales", "Eliminar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sucursales: public Ui_Sucursales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCURSALES_H
