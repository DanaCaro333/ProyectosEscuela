/********************************************************************************
** Form generated from reading UI file 'menulugares.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENULUGARES_H
#define UI_MENULUGARES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuLugares
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_lugares;
    QVBoxLayout *verticalLayout;
    QLabel *label_null;
    QPushButton *pushButton_atras;
    QLabel *label_tema;
    QLabel *label_tematexto;
    QLabel *label_15;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_costo1;
    QLabel *label_costo2;
    QLabel *label_costo3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_estrella1;
    QLabel *label_estrella2;
    QLabel *label_estrella3;
    QLabel *label_estrella4;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_lugar;

    void setupUi(QDialog *MenuLugares)
    {
        if (MenuLugares->objectName().isEmpty())
            MenuLugares->setObjectName(QString::fromUtf8("MenuLugares"));
        MenuLugares->resize(778, 669);
        MenuLugares->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        scrollArea = new QScrollArea(MenuLugares);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 230, 741, 401));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_lugares = new QWidget();
        scrollAreaWidgetContents_lugares->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_lugares"));
        scrollAreaWidgetContents_lugares->setGeometry(QRect(0, 0, 739, 399));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_lugares);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_null = new QLabel(scrollAreaWidgetContents_lugares);
        label_null->setObjectName(QString::fromUtf8("label_null"));
        label_null->setStyleSheet(QString::fromUtf8("font: 20pt \"DejaVu Sans Mono\";\n"
"color: rgb(186, 189, 182);"));
        label_null->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_null);

        scrollArea->setWidget(scrollAreaWidgetContents_lugares);
        pushButton_atras = new QPushButton(MenuLugares);
        pushButton_atras->setObjectName(QString::fromUtf8("pushButton_atras"));
        pushButton_atras->setGeometry(QRect(10, 640, 83, 25));
        pushButton_atras->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);"));
        label_tema = new QLabel(MenuLugares);
        label_tema->setObjectName(QString::fromUtf8("label_tema"));
        label_tema->setGeometry(QRect(10, 20, 211, 109));
        label_tema->setPixmap(QPixmap(QString::fromUtf8("../Pictures/bigfood.png")));
        label_tematexto = new QLabel(MenuLugares);
        label_tematexto->setObjectName(QString::fromUtf8("label_tematexto"));
        label_tematexto->setGeometry(QRect(250, 20, 401, 109));
        QFont font;
        font.setFamily(QString::fromUtf8("Jamrul"));
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label_tematexto->setFont(font);
        label_tematexto->setStyleSheet(QString::fromUtf8("font: 75 36pt \"Jamrul\";\n"
"color: rgb(73, 60, 107);"));
        label_tematexto->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(MenuLugares);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(680, 40, 81, 81));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../Pictures/turr.png")));
        layoutWidget = new QWidget(MenuLugares);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(280, 150, 211, 61));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_costo1 = new QLabel(layoutWidget);
        label_costo1->setObjectName(QString::fromUtf8("label_costo1"));
        label_costo1->setPixmap(QPixmap(QString::fromUtf8("../Downloads/iconoprecio.png")));

        horizontalLayout_4->addWidget(label_costo1);

        label_costo2 = new QLabel(layoutWidget);
        label_costo2->setObjectName(QString::fromUtf8("label_costo2"));
        label_costo2->setPixmap(QPixmap(QString::fromUtf8("../Downloads/iconoprecio.png")));

        horizontalLayout_4->addWidget(label_costo2);

        label_costo3 = new QLabel(layoutWidget);
        label_costo3->setObjectName(QString::fromUtf8("label_costo3"));
        label_costo3->setPixmap(QPixmap(QString::fromUtf8("../Downloads/iconoprecio.png")));

        horizontalLayout_4->addWidget(label_costo3);

        label_costo3->raise();
        label_costo2->raise();
        label_costo1->raise();
        layoutWidget1 = new QWidget(MenuLugares);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(530, 147, 221, 61));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_estrella1 = new QLabel(layoutWidget1);
        label_estrella1->setObjectName(QString::fromUtf8("label_estrella1"));
        label_estrella1->setPixmap(QPixmap(QString::fromUtf8("../Downloads/iconocalif.png")));

        horizontalLayout_11->addWidget(label_estrella1);

        label_estrella2 = new QLabel(layoutWidget1);
        label_estrella2->setObjectName(QString::fromUtf8("label_estrella2"));
        label_estrella2->setPixmap(QPixmap(QString::fromUtf8("../Downloads/iconocalif.png")));

        horizontalLayout_11->addWidget(label_estrella2);

        label_estrella3 = new QLabel(layoutWidget1);
        label_estrella3->setObjectName(QString::fromUtf8("label_estrella3"));
        label_estrella3->setPixmap(QPixmap(QString::fromUtf8("../Downloads/iconocalif.png")));

        horizontalLayout_11->addWidget(label_estrella3);

        label_estrella4 = new QLabel(layoutWidget1);
        label_estrella4->setObjectName(QString::fromUtf8("label_estrella4"));
        label_estrella4->setPixmap(QPixmap(QString::fromUtf8("../Downloads/iconocalif.png")));

        horizontalLayout_11->addWidget(label_estrella4);

        label_estrella2->raise();
        label_estrella1->raise();
        label_estrella3->raise();
        label_estrella4->raise();
        layoutWidget2 = new QWidget(MenuLugares);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 150, 218, 59));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../Downloads/iconoubicacion.png")));

        horizontalLayout->addWidget(label_4);

        label_lugar = new QLabel(layoutWidget2);
        label_lugar->setObjectName(QString::fromUtf8("label_lugar"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        label_lugar->setFont(font1);

        horizontalLayout->addWidget(label_lugar);


        retranslateUi(MenuLugares);

        QMetaObject::connectSlotsByName(MenuLugares);
    } // setupUi

    void retranslateUi(QDialog *MenuLugares)
    {
        MenuLugares->setWindowTitle(QApplication::translate("MenuLugares", "Dialog", nullptr));
        label_null->setText(QApplication::translate("MenuLugares", "No se encontraron lugares", nullptr));
        pushButton_atras->setText(QApplication::translate("MenuLugares", "Atr\303\241s", nullptr));
        label_tema->setText(QString());
        label_tematexto->setText(QApplication::translate("MenuLugares", "COMIDA", nullptr));
        label_15->setText(QString());
        label_costo1->setText(QString());
        label_costo2->setText(QString());
        label_costo3->setText(QString());
        label_estrella1->setText(QString());
        label_estrella2->setText(QString());
        label_estrella3->setText(QString());
        label_estrella4->setText(QString());
        label_4->setText(QString());
        label_lugar->setText(QApplication::translate("MenuLugares", "Tlaquepaque", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuLugares: public Ui_MenuLugares {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENULUGARES_H
