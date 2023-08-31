/********************************************************************************
** Form generated from reading UI file 'lugarfiltros.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LUGARFILTROS_H
#define UI_LUGARFILTROS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LugarFiltros
{
public:
    QPushButton *pushButton;
    QLabel *label_9;
    QPushButton *pushButton_atras;
    QLabel *label_tema;
    QLabel *label_tematexto;
    QLabel *label_2;
    QComboBox *comboBox_precio;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_5;
    QComboBox *comboBox_estrella;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox_lugar;
    QLabel *label_6;

    void setupUi(QDialog *LugarFiltros)
    {
        if (LugarFiltros->objectName().isEmpty())
            LugarFiltros->setObjectName(QString::fromUtf8("LugarFiltros"));
        LugarFiltros->resize(773, 593);
        LugarFiltros->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        pushButton = new QPushButton(LugarFiltros);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 530, 171, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        label_9 = new QLabel(LugarFiltros);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(690, 0, 81, 81));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../Pictures/turr.png")));
        pushButton_atras = new QPushButton(LugarFiltros);
        pushButton_atras->setObjectName(QString::fromUtf8("pushButton_atras"));
        pushButton_atras->setGeometry(QRect(10, 560, 83, 25));
        pushButton_atras->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);"));
        label_tema = new QLabel(LugarFiltros);
        label_tema->setObjectName(QString::fromUtf8("label_tema"));
        label_tema->setGeometry(QRect(20, 10, 231, 201));
        label_tema->setPixmap(QPixmap(QString::fromUtf8("../Downloads/bigfood.png")));
        label_tematexto = new QLabel(LugarFiltros);
        label_tematexto->setObjectName(QString::fromUtf8("label_tematexto"));
        label_tematexto->setGeometry(QRect(260, 70, 421, 118));
        QFont font;
        font.setFamily(QString::fromUtf8("Jamrul"));
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label_tematexto->setFont(font);
        label_tematexto->setStyleSheet(QString::fromUtf8("font: 75 36pt \"Jamrul\";\n"
"color: rgb(73, 60, 107);"));
        label_tematexto->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(LugarFiltros);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 410, 71, 70));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../Downloads/iconoprecio.png")));
        comboBox_precio = new QComboBox(LugarFiltros);
        comboBox_precio->setObjectName(QString::fromUtf8("comboBox_precio"));
        comboBox_precio->setGeometry(QRect(470, 430, 121, 25));
        comboBox_precio->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(221, 212, 255);\n"
"selection-color: rgb(92, 53, 102);"));
        layoutWidget = new QWidget(LugarFiltros);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 310, 379, 81));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("../Downloads/iconocalif.png")));

        horizontalLayout_2->addWidget(label);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        comboBox_estrella = new QComboBox(layoutWidget);
        comboBox_estrella->setObjectName(QString::fromUtf8("comboBox_estrella"));
        comboBox_estrella->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(221, 212, 255);\n"
"selection-color: rgb(92, 53, 102);"));

        horizontalLayout_2->addWidget(comboBox_estrella);

        layoutWidget1 = new QWidget(LugarFiltros);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(210, 220, 379, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../Downloads/iconoubicacion.png")));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        comboBox_lugar = new QComboBox(layoutWidget1);
        comboBox_lugar->setObjectName(QString::fromUtf8("comboBox_lugar"));
        comboBox_lugar->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(221, 212, 255);\n"
"selection-color: rgb(92, 53, 102);"));

        horizontalLayout->addWidget(comboBox_lugar);

        label_6 = new QLabel(LugarFiltros);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(350, 410, 51, 70));

        retranslateUi(LugarFiltros);

        QMetaObject::connectSlotsByName(LugarFiltros);
    } // setupUi

    void retranslateUi(QDialog *LugarFiltros)
    {
        LugarFiltros->setWindowTitle(QApplication::translate("LugarFiltros", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("LugarFiltros", "Filtrar", nullptr));
        label_9->setText(QString());
        pushButton_atras->setText(QApplication::translate("LugarFiltros", "Atr\303\241s", nullptr));
        label_tema->setText(QString());
        label_tematexto->setText(QApplication::translate("LugarFiltros", "COMIDA", nullptr));
        label_2->setText(QString());
        label->setText(QString());
        label_5->setText(QApplication::translate("LugarFiltros", "Calificaci\303\263n", nullptr));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("LugarFiltros", "Ubicaci\303\263n", nullptr));
        label_6->setText(QApplication::translate("LugarFiltros", "Precio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LugarFiltros: public Ui_LugarFiltros {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LUGARFILTROS_H
