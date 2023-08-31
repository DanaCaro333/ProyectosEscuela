/********************************************************************************
** Form generated from reading UI file 'imagen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEN_H
#define UI_IMAGEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Imagen
{
public:
    QGridLayout *gridLayout;
    QLabel *label_foto;
    QVBoxLayout *verticalLayout;
    QLabel *label_id;
    QPushButton *pushButton_eliminar;

    void setupUi(QWidget *Imagen)
    {
        if (Imagen->objectName().isEmpty())
            Imagen->setObjectName(QString::fromUtf8("Imagen"));
        Imagen->resize(327, 173);
        gridLayout = new QGridLayout(Imagen);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_foto = new QLabel(Imagen);
        label_foto->setObjectName(QString::fromUtf8("label_foto"));

        gridLayout->addWidget(label_foto, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_id = new QLabel(Imagen);
        label_id->setObjectName(QString::fromUtf8("label_id"));

        verticalLayout->addWidget(label_id);

        pushButton_eliminar = new QPushButton(Imagen);
        pushButton_eliminar->setObjectName(QString::fromUtf8("pushButton_eliminar"));

        verticalLayout->addWidget(pushButton_eliminar);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(Imagen);

        QMetaObject::connectSlotsByName(Imagen);
    } // setupUi

    void retranslateUi(QWidget *Imagen)
    {
        Imagen->setWindowTitle(QApplication::translate("Imagen", "Form", nullptr));
        label_foto->setText(QApplication::translate("Imagen", "TextLabel", nullptr));
        label_id->setText(QApplication::translate("Imagen", "TextLabel", nullptr));
        pushButton_eliminar->setText(QApplication::translate("Imagen", "Eliminar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Imagen: public Ui_Imagen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEN_H
