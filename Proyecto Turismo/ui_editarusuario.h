/********************************************************************************
** Form generated from reading UI file 'editarusuario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARUSUARIO_H
#define UI_EDITARUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditarUsuario
{
public:
    QGroupBox *groupBox;
    QLabel *label_22;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_12;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_usuario_2;
    QLineEdit *lineEdit_password_3;
    QLineEdit *lineEdit_password_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_nombres_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_6;
    QLineEdit *lineEdit_apellidos_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QLineEdit *lineEdit_correo_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditarUsuario)
    {
        if (EditarUsuario->objectName().isEmpty())
            EditarUsuario->setObjectName(QString::fromUtf8("EditarUsuario"));
        EditarUsuario->resize(583, 330);
        EditarUsuario->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        groupBox = new QGroupBox(EditarUsuario);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 561, 261));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(460, 160, 81, 81));
        label_22->setPixmap(QPixmap(QString::fromUtf8("../Pictures/turr.png")));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 150, 381, 91));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout->addWidget(label_12);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout->addWidget(label_13);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_usuario_2 = new QLineEdit(layoutWidget);
        lineEdit_usuario_2->setObjectName(QString::fromUtf8("lineEdit_usuario_2"));

        verticalLayout_2->addWidget(lineEdit_usuario_2);

        lineEdit_password_3 = new QLineEdit(layoutWidget);
        lineEdit_password_3->setObjectName(QString::fromUtf8("lineEdit_password_3"));

        verticalLayout_2->addWidget(lineEdit_password_3);

        lineEdit_password_2 = new QLineEdit(layoutWidget);
        lineEdit_password_2->setObjectName(QString::fromUtf8("lineEdit_password_2"));

        verticalLayout_2->addWidget(lineEdit_password_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 40, 541, 95));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_nombres_2 = new QLineEdit(layoutWidget1);
        lineEdit_nombres_2->setObjectName(QString::fromUtf8("lineEdit_nombres_2"));

        horizontalLayout_4->addWidget(lineEdit_nombres_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_10->addWidget(label_6);

        lineEdit_apellidos_2 = new QLineEdit(layoutWidget1);
        lineEdit_apellidos_2->setObjectName(QString::fromUtf8("lineEdit_apellidos_2"));

        horizontalLayout_10->addWidget(lineEdit_apellidos_2);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_8->addWidget(label_11);

        lineEdit_correo_2 = new QLineEdit(layoutWidget1);
        lineEdit_correo_2->setObjectName(QString::fromUtf8("lineEdit_correo_2"));

        horizontalLayout_8->addWidget(lineEdit_correo_2);


        verticalLayout_3->addLayout(horizontalLayout_8);

        buttonBox = new QDialogButtonBox(EditarUsuario);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(210, 290, 161, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(EditarUsuario);

        QMetaObject::connectSlotsByName(EditarUsuario);
    } // setupUi

    void retranslateUi(QDialog *EditarUsuario)
    {
        EditarUsuario->setWindowTitle(QApplication::translate("EditarUsuario", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("EditarUsuario", "Nueva Informaci\303\263n:", nullptr));
        label_22->setText(QString());
        label_3->setText(QApplication::translate("EditarUsuario", "Usuario:", nullptr));
        label_12->setText(QApplication::translate("EditarUsuario", "Contrase\303\261a:", nullptr));
        label_13->setText(QApplication::translate("EditarUsuario", "Confirmar contrase\303\261a:", nullptr));
        lineEdit_usuario_2->setText(QApplication::translate("EditarUsuario", "DanaCarrot", nullptr));
        lineEdit_password_3->setText(QApplication::translate("EditarUsuario", "**********", nullptr));
        lineEdit_password_2->setText(QApplication::translate("EditarUsuario", "**********", nullptr));
        label_5->setText(QApplication::translate("EditarUsuario", "Nombre(s):", nullptr));
        lineEdit_nombres_2->setText(QApplication::translate("EditarUsuario", "Dana Carolina", nullptr));
        label_6->setText(QApplication::translate("EditarUsuario", "Apellido(s):", nullptr));
        lineEdit_apellidos_2->setText(QApplication::translate("EditarUsuario", "Ramirez Velazquez", nullptr));
        label_11->setText(QApplication::translate("EditarUsuario", "Correo electr\303\263nico:", nullptr));
        lineEdit_correo_2->setText(QApplication::translate("EditarUsuario", "dana.caro@gmail.com", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditarUsuario: public Ui_EditarUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARUSUARIO_H
