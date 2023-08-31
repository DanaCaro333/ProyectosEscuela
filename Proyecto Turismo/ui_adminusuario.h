/********************************************************************************
** Form generated from reading UI file 'adminusuario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINUSUARIO_H
#define UI_ADMINUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminUsuario
{
public:
    QLabel *label_8;
    QPushButton *pushButton_eliminar;
    QPushButton *pushButton_atras;
    QGroupBox *groupBox_4;
    QScrollBar *verticalScrollBar_2;
    QGroupBox *groupBox;
    QPushButton *pushButton_detalle;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLabel *label_13;
    QScrollBar *verticalScrollBar;
    QPushButton *pushButton_editar;
    QToolButton *toolButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_10;

    void setupUi(QDialog *AdminUsuario)
    {
        if (AdminUsuario->objectName().isEmpty())
            AdminUsuario->setObjectName(QString::fromUtf8("AdminUsuario"));
        AdminUsuario->resize(608, 580);
        AdminUsuario->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        label_8 = new QLabel(AdminUsuario);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 611, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Jamrul"));
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);\n"
"font: 75 36pt \"Jamrul\";\n"
"color: rgb(73, 60, 107);"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_eliminar = new QPushButton(AdminUsuario);
        pushButton_eliminar->setObjectName(QString::fromUtf8("pushButton_eliminar"));
        pushButton_eliminar->setGeometry(QRect(470, 540, 121, 25));
        pushButton_eliminar->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 154, 154);"));
        pushButton_atras = new QPushButton(AdminUsuario);
        pushButton_atras->setObjectName(QString::fromUtf8("pushButton_atras"));
        pushButton_atras->setGeometry(QRect(10, 540, 83, 25));
        pushButton_atras->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);"));
        groupBox_4 = new QGroupBox(AdminUsuario);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 280, 571, 241));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);\n"
""));
        verticalScrollBar_2 = new QScrollBar(groupBox_4);
        verticalScrollBar_2->setObjectName(QString::fromUtf8("verticalScrollBar_2"));
        verticalScrollBar_2->setGeometry(QRect(610, 20, 20, 221));
        verticalScrollBar_2->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 531, 111));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);\n"
""));
        pushButton_detalle = new QPushButton(groupBox);
        pushButton_detalle->setObjectName(QString::fromUtf8("pushButton_detalle"));
        pushButton_detalle->setGeometry(QRect(440, 80, 83, 25));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 103, 42));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_11);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_12);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(120, 30, 401, 42));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_9);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_13);

        verticalScrollBar = new QScrollBar(groupBox_4);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(550, 20, 16, 221));
        verticalScrollBar->setOrientation(Qt::Vertical);
        pushButton_editar = new QPushButton(AdminUsuario);
        pushButton_editar->setObjectName(QString::fromUtf8("pushButton_editar"));
        pushButton_editar->setGeometry(QRect(230, 230, 141, 25));
        toolButton = new QToolButton(AdminUsuario);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(560, 250, 29, 24));
        layoutWidget2 = new QWidget(AdminUsuario);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(150, 80, 441, 131));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));

        verticalLayout->addWidget(label_7);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));

        verticalLayout->addWidget(label_6);

        layoutWidget3 = new QWidget(AdminUsuario);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 80, 127, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label = new QLabel(layoutWidget3);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_2->addWidget(label_10);


        retranslateUi(AdminUsuario);

        QMetaObject::connectSlotsByName(AdminUsuario);
    } // setupUi

    void retranslateUi(QDialog *AdminUsuario)
    {
        AdminUsuario->setWindowTitle(QApplication::translate("AdminUsuario", "Dialog", nullptr));
        label_8->setText(QApplication::translate("AdminUsuario", "La Madriguera", nullptr));
        pushButton_eliminar->setText(QApplication::translate("AdminUsuario", "Eliminar Cuenta", nullptr));
        pushButton_atras->setText(QApplication::translate("AdminUsuario", "Atr\303\241s", nullptr));
        groupBox_4->setTitle(QApplication::translate("AdminUsuario", "Mis Reportes", nullptr));
        groupBox->setTitle(QApplication::translate("AdminUsuario", "Alguien report\303\263:", nullptr));
        pushButton_detalle->setText(QApplication::translate("AdminUsuario", "Ver detalles", nullptr));
        label_11->setText(QApplication::translate("AdminUsuario", "Comentario en:", nullptr));
        label_12->setText(QApplication::translate("AdminUsuario", "Motivo:", nullptr));
        label_9->setText(QApplication::translate("AdminUsuario", "La Madriguera", nullptr));
        label_13->setText(QApplication::translate("AdminUsuario", "Lenguaje ofensivo", nullptr));
        pushButton_editar->setText(QApplication::translate("AdminUsuario", "Editar informacion", nullptr));
        toolButton->setText(QApplication::translate("AdminUsuario", "...", nullptr));
        label_7->setText(QApplication::translate("AdminUsuario", "DanaCarrot", nullptr));
        label_3->setText(QApplication::translate("AdminUsuario", "Dana Carolina", nullptr));
        label_5->setText(QApplication::translate("AdminUsuario", "Ramirez Velazquez", nullptr));
        label_6->setText(QApplication::translate("AdminUsuario", "dana.caro@gmail.com", nullptr));
        label_2->setText(QApplication::translate("AdminUsuario", "Usuario:", nullptr));
        label->setText(QApplication::translate("AdminUsuario", "Nombre(s):", nullptr));
        label_4->setText(QApplication::translate("AdminUsuario", "Apellido(s):", nullptr));
        label_10->setText(QApplication::translate("AdminUsuario", "Correo electr\303\263nico:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminUsuario: public Ui_AdminUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINUSUARIO_H
