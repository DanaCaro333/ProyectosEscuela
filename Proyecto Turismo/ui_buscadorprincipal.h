/********************************************************************************
** Form generated from reading UI file 'buscadorprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCADORPRINCIPAL_H
#define UI_BUSCADORPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BuscadorPrincipal
{
public:
    QLabel *label;
    QLabel *label_10;
    QLabel *label_2;
    QPushButton *pushButton_micuenta;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_8;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_comida;
    QPushButton *pushButton_autoservicio;
    QPushButton *pushButton_cultural;
    QPushButton *pushButton_natural;
    QPushButton *pushButton_salud;
    QPushButton *pushButton_cerrar;
    QLabel *label_username;

    void setupUi(QDialog *BuscadorPrincipal)
    {
        if (BuscadorPrincipal->objectName().isEmpty())
            BuscadorPrincipal->setObjectName(QString::fromUtf8("BuscadorPrincipal"));
        BuscadorPrincipal->resize(787, 504);
        BuscadorPrincipal->setAutoFillBackground(false);
        BuscadorPrincipal->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        label = new QLabel(BuscadorPrincipal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 120, 491, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Jamrul"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(73, 60, 107);"));
        label_10 = new QLabel(BuscadorPrincipal);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(-20, 0, 231, 101));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../Downloads/turis.png")));
        label_2 = new QLabel(BuscadorPrincipal);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(690, 10, 81, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../Pictures/usuario.png")));
        label_2->setAlignment(Qt::AlignCenter);
        pushButton_micuenta = new QPushButton(BuscadorPrincipal);
        pushButton_micuenta->setObjectName(QString::fromUtf8("pushButton_micuenta"));
        pushButton_micuenta->setGeometry(QRect(600, 60, 83, 25));
        layoutWidget = new QWidget(BuscadorPrincipal);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 240, 681, 134));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../Pictures/foodmid.png")));

        horizontalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../Pictures/autoservicemid.png")));

        horizontalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../Pictures/culturemid.png")));

        horizontalLayout_2->addWidget(label_6);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../Pictures/naturemid.png")));

        horizontalLayout_2->addWidget(label_3);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../Pictures/saludmid.png")));

        horizontalLayout_2->addWidget(label_8);

        layoutWidget1 = new QWidget(BuscadorPrincipal);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 370, 701, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_comida = new QPushButton(layoutWidget1);
        pushButton_comida->setObjectName(QString::fromUtf8("pushButton_comida"));

        horizontalLayout->addWidget(pushButton_comida);

        pushButton_autoservicio = new QPushButton(layoutWidget1);
        pushButton_autoservicio->setObjectName(QString::fromUtf8("pushButton_autoservicio"));

        horizontalLayout->addWidget(pushButton_autoservicio);

        pushButton_cultural = new QPushButton(layoutWidget1);
        pushButton_cultural->setObjectName(QString::fromUtf8("pushButton_cultural"));

        horizontalLayout->addWidget(pushButton_cultural);

        pushButton_natural = new QPushButton(layoutWidget1);
        pushButton_natural->setObjectName(QString::fromUtf8("pushButton_natural"));

        horizontalLayout->addWidget(pushButton_natural);

        pushButton_salud = new QPushButton(layoutWidget1);
        pushButton_salud->setObjectName(QString::fromUtf8("pushButton_salud"));

        horizontalLayout->addWidget(pushButton_salud);

        pushButton_cerrar = new QPushButton(BuscadorPrincipal);
        pushButton_cerrar->setObjectName(QString::fromUtf8("pushButton_cerrar"));
        pushButton_cerrar->setGeometry(QRect(10, 470, 131, 25));
        label_username = new QLabel(BuscadorPrincipal);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setGeometry(QRect(370, 20, 311, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Gargi"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_username->setFont(font1);
        label_username->setStyleSheet(QString::fromUtf8("color: rgb(32, 74, 135);"));
        label_username->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(BuscadorPrincipal);

        QMetaObject::connectSlotsByName(BuscadorPrincipal);
    } // setupUi

    void retranslateUi(QDialog *BuscadorPrincipal)
    {
        BuscadorPrincipal->setWindowTitle(QApplication::translate("BuscadorPrincipal", "Dialog", nullptr));
        label->setText(QApplication::translate("BuscadorPrincipal", "Turismo de Jalisco", nullptr));
        label_10->setText(QString());
        label_2->setText(QString());
        pushButton_micuenta->setText(QApplication::translate("BuscadorPrincipal", "Mi cuenta", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_3->setText(QString());
        label_8->setText(QString());
        pushButton_comida->setText(QApplication::translate("BuscadorPrincipal", "Comida", nullptr));
        pushButton_autoservicio->setText(QApplication::translate("BuscadorPrincipal", "Autoservicio", nullptr));
        pushButton_cultural->setText(QApplication::translate("BuscadorPrincipal", "Cultural", nullptr));
        pushButton_natural->setText(QApplication::translate("BuscadorPrincipal", "Actividades", nullptr));
        pushButton_salud->setText(QApplication::translate("BuscadorPrincipal", "Salud", nullptr));
        pushButton_cerrar->setText(QApplication::translate("BuscadorPrincipal", "Cerrar Sesi\303\263n", nullptr));
        label_username->setText(QApplication::translate("BuscadorPrincipal", "XXXXXX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BuscadorPrincipal: public Ui_BuscadorPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCADORPRINCIPAL_H
