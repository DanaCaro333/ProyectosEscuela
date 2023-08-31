/********************************************************************************
** Form generated from reading UI file 'reporte.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTE_H
#define UI_REPORTE_H

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

class Ui_Reporte
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit_2;
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QDialog *Reporte)
    {
        if (Reporte->objectName().isEmpty())
            Reporte->setObjectName(QString::fromUtf8("Reporte"));
        Reporte->resize(511, 401);
        Reporte->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        groupBox = new QGroupBox(Reporte);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 491, 251));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 64, 17));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 80, 451, 61));
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 30, 64, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 30, 391, 17));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 150, 81, 17));
        plainTextEdit_2 = new QPlainTextEdit(groupBox);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(20, 170, 451, 61));
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        buttonBox = new QDialogButtonBox(Reporte);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(170, 360, 166, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(Reporte);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 270, 466, 83));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(widget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);


        retranslateUi(Reporte);

        QMetaObject::connectSlotsByName(Reporte);
    } // setupUi

    void retranslateUi(QDialog *Reporte)
    {
        Reporte->setWindowTitle(QApplication::translate("Reporte", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Reporte", "Detalles del reporte", nullptr));
        label->setText(QApplication::translate("Reporte", "Detalles:", nullptr));
        label_2->setText(QApplication::translate("Reporte", "Motivo:", nullptr));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("Reporte", "Comentario:", nullptr));
        radioButton->setText(QApplication::translate("Reporte", "Eliminar comentario", nullptr));
        radioButton_2->setText(QApplication::translate("Reporte", "Eliminar comentario y reportar al usuario que realiz\303\263 el comentario", nullptr));
        radioButton_3->setText(QApplication::translate("Reporte", "Ignorar reporte", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reporte: public Ui_Reporte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTE_H
