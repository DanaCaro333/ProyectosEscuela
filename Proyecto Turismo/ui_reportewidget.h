/********************************************************************************
** Form generated from reading UI file 'reportewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTEWIDGET_H
#define UI_REPORTEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reportewidget
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLabel *label_13;
    QLabel *label_14;
    QTextBrowser *textBrowser;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QLabel *label_12;

    void setupUi(QWidget *Reportewidget)
    {
        if (Reportewidget->objectName().isEmpty())
            Reportewidget->setObjectName(QString::fromUtf8("Reportewidget"));
        Reportewidget->resize(681, 165);
        groupBox = new QGroupBox(Reportewidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 531, 161));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(160, 30, 361, 44));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(11);
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_9);

        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_13);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 80, 149, 17));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 100, 511, 51));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 151, 41));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_11);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_12);


        retranslateUi(Reportewidget);

        QMetaObject::connectSlotsByName(Reportewidget);
    } // setupUi

    void retranslateUi(QWidget *Reportewidget)
    {
        Reportewidget->setWindowTitle(QApplication::translate("Reportewidget", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("Reportewidget", "Reporte:", nullptr));
        label_9->setText(QApplication::translate("Reportewidget", "La Madriguera", nullptr));
        label_13->setText(QApplication::translate("Reportewidget", "Lenguaje ofensivo", nullptr));
        label_14->setText(QApplication::translate("Reportewidget", "Detalles:", nullptr));
        label_11->setText(QApplication::translate("Reportewidget", "Comentario en:", nullptr));
        label_12->setText(QApplication::translate("Reportewidget", "Motivo:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reportewidget: public Ui_Reportewidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTEWIDGET_H
