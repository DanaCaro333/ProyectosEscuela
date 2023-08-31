/********************************************************************************
** Form generated from reading UI file 'agregardireccion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARDIRECCION_H
#define UI_AGREGARDIRECCION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AgregarDireccion
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox_lugar;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_colonia;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_calle;
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit_numero;
    QLabel *label_5;

    void setupUi(QDialog *AgregarDireccion)
    {
        if (AgregarDireccion->objectName().isEmpty())
            AgregarDireccion->setObjectName(QString::fromUtf8("AgregarDireccion"));
        AgregarDireccion->resize(503, 294);
        AgregarDireccion->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        groupBox = new QGroupBox(AgregarDireccion);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 461, 261));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 421, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBox_lugar = new QComboBox(layoutWidget);
        comboBox_lugar->setObjectName(QString::fromUtf8("comboBox_lugar"));
        comboBox_lugar->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(221, 212, 255);\n"
"selection-color: rgb(92, 53, 102);"));

        horizontalLayout->addWidget(comboBox_lugar);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_colonia = new QLineEdit(layoutWidget);
        lineEdit_colonia->setObjectName(QString::fromUtf8("lineEdit_colonia"));

        horizontalLayout_3->addWidget(lineEdit_colonia);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_calle = new QLineEdit(layoutWidget);
        lineEdit_calle->setObjectName(QString::fromUtf8("lineEdit_calle"));

        horizontalLayout_4->addWidget(lineEdit_calle);


        verticalLayout->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(groupBox);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(130, 220, 166, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit_numero = new QLineEdit(groupBox);
        lineEdit_numero->setObjectName(QString::fromUtf8("lineEdit_numero"));
        lineEdit_numero->setGeometry(QRect(80, 170, 201, 25));
        lineEdit_numero->setMaxLength(8);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(17, 166, 57, 33));

        retranslateUi(AgregarDireccion);

        QMetaObject::connectSlotsByName(AgregarDireccion);
    } // setupUi

    void retranslateUi(QDialog *AgregarDireccion)
    {
        AgregarDireccion->setWindowTitle(QApplication::translate("AgregarDireccion", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("AgregarDireccion", "Direcci\303\263n", nullptr));
        label_2->setText(QApplication::translate("AgregarDireccion", "Municipio:", nullptr));
        label_3->setText(QApplication::translate("AgregarDireccion", "Colonia", nullptr));
        label_4->setText(QApplication::translate("AgregarDireccion", "Calle", nullptr));
        label_5->setText(QApplication::translate("AgregarDireccion", "N\303\272mero:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AgregarDireccion: public Ui_AgregarDireccion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARDIRECCION_H
