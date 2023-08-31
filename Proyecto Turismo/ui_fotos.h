/********************************************************************************
** Form generated from reading UI file 'fotos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOTOS_H
#define UI_FOTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fotos
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *label_null;
    QPushButton *pushButton;
    QPushButton *pushButton_agregar;

    void setupUi(QDialog *Fotos)
    {
        if (Fotos->objectName().isEmpty())
            Fotos->setObjectName(QString::fromUtf8("Fotos"));
        Fotos->resize(418, 507);
        Fotos->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        groupBox = new QGroupBox(Fotos);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(9, 9, 401, 451));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 375, 405));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_null = new QLabel(scrollAreaWidgetContents);
        label_null->setObjectName(QString::fromUtf8("label_null"));
        label_null->setStyleSheet(QString::fromUtf8("font: 14pt \"DejaVu Sans Mono\";\n"
"color: rgb(85, 87, 83);"));
        label_null->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_null);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        pushButton = new QPushButton(Fotos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 470, 131, 25));
        pushButton_agregar = new QPushButton(Fotos);
        pushButton_agregar->setObjectName(QString::fromUtf8("pushButton_agregar"));
        pushButton_agregar->setGeometry(QRect(249, 470, 161, 25));

        retranslateUi(Fotos);

        QMetaObject::connectSlotsByName(Fotos);
    } // setupUi

    void retranslateUi(QDialog *Fotos)
    {
        Fotos->setWindowTitle(QApplication::translate("Fotos", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Fotos", "Galer\303\255a del Lugar", nullptr));
        label_null->setText(QApplication::translate("Fotos", "No hay imagenes a\303\272n", nullptr));
        pushButton->setText(QApplication::translate("Fotos", "Listo", nullptr));
        pushButton_agregar->setText(QApplication::translate("Fotos", "+ Agregar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fotos: public Ui_Fotos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOTOS_H
