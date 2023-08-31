/********************************************************************************
** Form generated from reading UI file 'formularioreporte.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULARIOREPORTE_H
#define UI_FORMULARIOREPORTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormularioReporte
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FormularioReporte)
    {
        if (FormularioReporte->objectName().isEmpty())
            FormularioReporte->setObjectName(QString::fromUtf8("FormularioReporte"));
        FormularioReporte->resize(408, 409);
        FormularioReporte->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        groupBox = new QGroupBox(FormularioReporte);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 381, 341));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 220, 64, 17));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 240, 321, 70));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 320, 170));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(layoutWidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(layoutWidget);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(layoutWidget);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        verticalLayout->addWidget(radioButton_6);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 30, 64, 17));
        buttonBox = new QDialogButtonBox(FormularioReporte);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(110, 370, 166, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(FormularioReporte);

        QMetaObject::connectSlotsByName(FormularioReporte);
    } // setupUi

    void retranslateUi(QDialog *FormularioReporte)
    {
        FormularioReporte->setWindowTitle(QApplication::translate("FormularioReporte", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("FormularioReporte", "Detalles del reporte", nullptr));
        label->setText(QApplication::translate("FormularioReporte", "Detalles:", nullptr));
        radioButton->setText(QApplication::translate("FormularioReporte", "Informaci\303\263n falsa", nullptr));
        radioButton_2->setText(QApplication::translate("FormularioReporte", "Lenguaje inapropiado", nullptr));
        radioButton_3->setText(QApplication::translate("FormularioReporte", "Agresi\303\263n hacia mi persona o alguien cercano", nullptr));
        radioButton_4->setText(QApplication::translate("FormularioReporte", "Contenido sexual", nullptr));
        radioButton_5->setText(QApplication::translate("FormularioReporte", "Discriminaci\303\263n de alg\303\272n tipo", nullptr));
        radioButton_6->setText(QApplication::translate("FormularioReporte", "Otro", nullptr));
        label_2->setText(QApplication::translate("FormularioReporte", "Motivo:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormularioReporte: public Ui_FormularioReporte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARIOREPORTE_H
