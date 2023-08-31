/********************************************************************************
** Form generated from reading UI file 'adminlugar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLUGAR_H
#define UI_ADMINLUGAR_H

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

class Ui_Adminlugar
{
public:
    QLabel *label_nombre;
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea_Coments;
    QWidget *scrollAreaWidgetContents_comentarios;
    QVBoxLayout *verticalLayout;
    QLabel *label_null;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_reportes;
    QGridLayout *gridLayout_5;
    QLabel *label_null_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_cerrar;

    void setupUi(QDialog *Adminlugar)
    {
        if (Adminlugar->objectName().isEmpty())
            Adminlugar->setObjectName(QString::fromUtf8("Adminlugar"));
        Adminlugar->resize(1036, 626);
        Adminlugar->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        label_nombre = new QLabel(Adminlugar);
        label_nombre->setObjectName(QString::fromUtf8("label_nombre"));
        label_nombre->setGeometry(QRect(180, 10, 691, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Jamrul"));
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label_nombre->setFont(font);
        label_nombre->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);\n"
"font: 75 36pt \"Jamrul\";\n"
"color: rgb(73, 60, 107);"));
        label_nombre->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Adminlugar);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 580, 181, 25));
        groupBox_3 = new QGroupBox(Adminlugar);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 80, 481, 481));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);\n"
""));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        scrollArea_Coments = new QScrollArea(groupBox_3);
        scrollArea_Coments->setObjectName(QString::fromUtf8("scrollArea_Coments"));
        scrollArea_Coments->setWidgetResizable(true);
        scrollAreaWidgetContents_comentarios = new QWidget();
        scrollAreaWidgetContents_comentarios->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_comentarios"));
        scrollAreaWidgetContents_comentarios->setGeometry(QRect(0, 0, 453, 433));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_comentarios);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_null = new QLabel(scrollAreaWidgetContents_comentarios);
        label_null->setObjectName(QString::fromUtf8("label_null"));
        label_null->setStyleSheet(QString::fromUtf8("font: 14pt \"DejaVu Sans Mono\";\n"
"color: rgb(211, 215, 207);"));
        label_null->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_null);

        scrollArea_Coments->setWidget(scrollAreaWidgetContents_comentarios);

        gridLayout->addWidget(scrollArea_Coments, 0, 1, 1, 1);

        groupBox_4 = new QGroupBox(Adminlugar);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(530, 80, 481, 481));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);\n"
""));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea_2 = new QScrollArea(groupBox_4);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_reportes = new QWidget();
        scrollAreaWidgetContents_reportes->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_reportes"));
        scrollAreaWidgetContents_reportes->setGeometry(QRect(0, 0, 455, 435));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents_reportes);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_null_2 = new QLabel(scrollAreaWidgetContents_reportes);
        label_null_2->setObjectName(QString::fromUtf8("label_null_2"));
        label_null_2->setStyleSheet(QString::fromUtf8("font: 14pt \"DejaVu Sans Mono\";\n"
"color: rgb(211, 215, 207);"));
        label_null_2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_null_2, 0, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_reportes);

        gridLayout_2->addWidget(scrollArea_2, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(Adminlugar);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(910, 10, 121, 25));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 154, 154);"));
        pushButton_cerrar = new QPushButton(Adminlugar);
        pushButton_cerrar->setObjectName(QString::fromUtf8("pushButton_cerrar"));
        pushButton_cerrar->setGeometry(QRect(10, 590, 131, 25));

        retranslateUi(Adminlugar);

        QMetaObject::connectSlotsByName(Adminlugar);
    } // setupUi

    void retranslateUi(QDialog *Adminlugar)
    {
        Adminlugar->setWindowTitle(QApplication::translate("Adminlugar", "Dialog", nullptr));
        label_nombre->setText(QString());
        pushButton->setText(QApplication::translate("Adminlugar", "Ver lugar", nullptr));
        groupBox_3->setTitle(QApplication::translate("Adminlugar", "Comentarios/Valoraciones", nullptr));
        label_null->setText(QApplication::translate("Adminlugar", "No hay comentarios de tu negocio", nullptr));
        groupBox_4->setTitle(QApplication::translate("Adminlugar", "Reportes", nullptr));
        label_null_2->setText(QApplication::translate("Adminlugar", "No hay reportes de tu negocio", nullptr));
        pushButton_3->setText(QApplication::translate("Adminlugar", "Eliminar Lugar", nullptr));
        pushButton_cerrar->setText(QApplication::translate("Adminlugar", "Cerrar Sesi\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adminlugar: public Ui_Adminlugar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLUGAR_H
