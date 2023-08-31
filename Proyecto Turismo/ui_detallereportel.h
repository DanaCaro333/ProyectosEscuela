/********************************************************************************
** Form generated from reading UI file 'detallereportel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETALLEREPORTEL_H
#define UI_DETALLEREPORTEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetalleReporteL
{
public:
    QGroupBox *groupBox;
    QTextBrowser *textBrowser_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_16;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLabel *label_13;
    QLabel *label_17;
    QLabel *label_15;

    void setupUi(QDialog *DetalleReporteL)
    {
        if (DetalleReporteL->objectName().isEmpty())
            DetalleReporteL->setObjectName(QString::fromUtf8("DetalleReporteL"));
        DetalleReporteL->resize(550, 218);
        DetalleReporteL->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        groupBox = new QGroupBox(DetalleReporteL);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 531, 191));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        textBrowser_4 = new QTextBrowser(groupBox);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(10, 130, 511, 51));
        textBrowser_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 103, 65));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_4->addWidget(label_11);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_4->addWidget(label_16);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(120, 30, 401, 65));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_9);

        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_13);

        label_17 = new QLabel(layoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_17);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 100, 161, 21));

        retranslateUi(DetalleReporteL);

        QMetaObject::connectSlotsByName(DetalleReporteL);
    } // setupUi

    void retranslateUi(QDialog *DetalleReporteL)
    {
        DetalleReporteL->setWindowTitle(QApplication::translate("DetalleReporteL", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("DetalleReporteL", "Alguien report\303\263:", nullptr));
        label_11->setText(QApplication::translate("DetalleReporteL", "Reporte de:", nullptr));
        label_12->setText(QApplication::translate("DetalleReporteL", "Motivo:", nullptr));
        label_16->setText(QApplication::translate("DetalleReporteL", "Fecha:", nullptr));
        label_9->setText(QApplication::translate("DetalleReporteL", "La Madriguera", nullptr));
        label_13->setText(QApplication::translate("DetalleReporteL", "Lenguaje ofensivo", nullptr));
        label_17->setText(QApplication::translate("DetalleReporteL", "23/05/2001", nullptr));
        label_15->setText(QApplication::translate("DetalleReporteL", "Descripci\303\263n del reporte:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetalleReporteL: public Ui_DetalleReporteL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETALLEREPORTEL_H
