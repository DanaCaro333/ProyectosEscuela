/********************************************************************************
** Form generated from reading UI file 'iniciarsesion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIARSESION_H
#define UI_INICIARSESION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IniciarSesion
{
public:
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_atras;
    QGroupBox *groupBox;
    QPushButton *pushButton_iniciar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_usuario;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_contrasena;
    QPushButton *pushButton_iniciar_2;
    QLabel *label_sesion;

    void setupUi(QDialog *IniciarSesion)
    {
        if (IniciarSesion->objectName().isEmpty())
            IniciarSesion->setObjectName(QString::fromUtf8("IniciarSesion"));
        IniciarSesion->resize(760, 474);
        IniciarSesion->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        label_5 = new QLabel(IniciarSesion);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 50, 201, 161));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../Pictures/ubic1.png")));
        label_6 = new QLabel(IniciarSesion);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(580, 310, 181, 161));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../Pictures/taxi.png")));
        pushButton_atras = new QPushButton(IniciarSesion);
        pushButton_atras->setObjectName(QString::fromUtf8("pushButton_atras"));
        pushButton_atras->setGeometry(QRect(10, 440, 83, 25));
        pushButton_atras->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);"));
        groupBox = new QGroupBox(IniciarSesion);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(230, 110, 311, 231));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_iniciar = new QPushButton(groupBox);
        pushButton_iniciar->setObjectName(QString::fromUtf8("pushButton_iniciar"));
        pushButton_iniciar->setGeometry(QRect(110, 190, 83, 25));
        pushButton_iniciar->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 47, 175);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 291, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_usuario = new QLineEdit(layoutWidget);
        lineEdit_usuario->setObjectName(QString::fromUtf8("lineEdit_usuario"));

        horizontalLayout->addWidget(lineEdit_usuario);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 110, 291, 71));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_contrasena = new QLineEdit(layoutWidget_2);
        lineEdit_contrasena->setObjectName(QString::fromUtf8("lineEdit_contrasena"));

        horizontalLayout_2->addWidget(lineEdit_contrasena);

        pushButton_iniciar_2 = new QPushButton(IniciarSesion);
        pushButton_iniciar_2->setObjectName(QString::fromUtf8("pushButton_iniciar_2"));
        pushButton_iniciar_2->setGeometry(QRect(230, 360, 311, 25));
        label_sesion = new QLabel(IniciarSesion);
        label_sesion->setObjectName(QString::fromUtf8("label_sesion"));
        label_sesion->setGeometry(QRect(0, 0, 761, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Dejavu Sans Mono Book"));
        font.setPointSize(23);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_sesion->setFont(font);
        label_sesion->setStyleSheet(QString::fromUtf8("font: 23pt \"Dejavu Sans Mono Book\";\n"
"color: rgb(73, 60, 107);\n"
"background-color: rgb(238, 238, 236);"));
        label_sesion->setAlignment(Qt::AlignCenter);

        retranslateUi(IniciarSesion);

        QMetaObject::connectSlotsByName(IniciarSesion);
    } // setupUi

    void retranslateUi(QDialog *IniciarSesion)
    {
        IniciarSesion->setWindowTitle(QApplication::translate("IniciarSesion", "Dialog", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        pushButton_atras->setText(QApplication::translate("IniciarSesion", "Atr\303\241s", nullptr));
        groupBox->setTitle(QApplication::translate("IniciarSesion", "Iniciar sesi\303\263n:", nullptr));
        pushButton_iniciar->setText(QApplication::translate("IniciarSesion", "Iniciar", nullptr));
        label->setText(QApplication::translate("IniciarSesion", "Usuario:", nullptr));
        label_2->setText(QApplication::translate("IniciarSesion", "Contrase\303\261a:", nullptr));
        pushButton_iniciar_2->setText(QApplication::translate("IniciarSesion", "No tengo una cuenta", nullptr));
        label_sesion->setText(QApplication::translate("IniciarSesion", "Usuario", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IniciarSesion: public Ui_IniciarSesion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIARSESION_H
