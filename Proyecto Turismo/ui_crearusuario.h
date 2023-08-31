/********************************************************************************
** Form generated from reading UI file 'crearusuario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREARUSUARIO_H
#define UI_CREARUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrearUsuario
{
public:
    QLabel *label_17;
    QLabel *label_6;
    QGroupBox *groupBox;
    QPushButton *pushButton_crearUsuario;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_2;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_usuario;
    QLabel *label_password;
    QLabel *label_cpassword;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_usuario;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_cpassword;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_nombre;
    QLineEdit *lineEdit_nombre;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_apellido;
    QLineEdit *lineEdit_apellido;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_correo;
    QLineEdit *lineEdit_correo;
    QLabel *label_7;
    QPushButton *pushButton_atras;
    QLabel *label_10;

    void setupUi(QDialog *CrearUsuario)
    {
        if (CrearUsuario->objectName().isEmpty())
            CrearUsuario->setObjectName(QString::fromUtf8("CrearUsuario"));
        CrearUsuario->resize(631, 727);
        label_17 = new QLabel(CrearUsuario);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(0, 0, 291, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        label_17->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(CrearUsuario);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(400, 0, 231, 101));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../Pictures/turis.png")));
        groupBox = new QGroupBox(CrearUsuario);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 120, 571, 391));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        pushButton_crearUsuario = new QPushButton(groupBox);
        pushButton_crearUsuario->setObjectName(QString::fromUtf8("pushButton_crearUsuario"));
        pushButton_crearUsuario->setGeometry(QRect(450, 350, 111, 25));
        checkBox_1 = new QCheckBox(groupBox);
        checkBox_1->setObjectName(QString::fromUtf8("checkBox_1"));
        checkBox_1->setGeometry(QRect(10, 240, 14, 15));
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 320, 151, 23));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 240, 521, 51));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 140, 381, 91));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_usuario = new QLabel(layoutWidget_2);
        label_usuario->setObjectName(QString::fromUtf8("label_usuario"));

        verticalLayout->addWidget(label_usuario);

        label_password = new QLabel(layoutWidget_2);
        label_password->setObjectName(QString::fromUtf8("label_password"));

        verticalLayout->addWidget(label_password);

        label_cpassword = new QLabel(layoutWidget_2);
        label_cpassword->setObjectName(QString::fromUtf8("label_cpassword"));

        verticalLayout->addWidget(label_cpassword);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_usuario = new QLineEdit(layoutWidget_2);
        lineEdit_usuario->setObjectName(QString::fromUtf8("lineEdit_usuario"));

        verticalLayout_2->addWidget(lineEdit_usuario);

        lineEdit_password = new QLineEdit(layoutWidget_2);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineEdit_password);

        lineEdit_cpassword = new QLineEdit(layoutWidget_2);
        lineEdit_cpassword->setObjectName(QString::fromUtf8("lineEdit_cpassword"));
        lineEdit_cpassword->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineEdit_cpassword);


        horizontalLayout_3->addLayout(verticalLayout_2);

        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 541, 95));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_nombre = new QLabel(layoutWidget);
        label_nombre->setObjectName(QString::fromUtf8("label_nombre"));

        horizontalLayout_4->addWidget(label_nombre);

        lineEdit_nombre = new QLineEdit(layoutWidget);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));

        horizontalLayout_4->addWidget(lineEdit_nombre);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_apellido = new QLabel(layoutWidget);
        label_apellido->setObjectName(QString::fromUtf8("label_apellido"));

        horizontalLayout_10->addWidget(label_apellido);

        lineEdit_apellido = new QLineEdit(layoutWidget);
        lineEdit_apellido->setObjectName(QString::fromUtf8("lineEdit_apellido"));

        horizontalLayout_10->addWidget(lineEdit_apellido);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_correo = new QLabel(layoutWidget);
        label_correo->setObjectName(QString::fromUtf8("label_correo"));

        horizontalLayout_8->addWidget(label_correo);

        lineEdit_correo = new QLineEdit(layoutWidget);
        lineEdit_correo->setObjectName(QString::fromUtf8("lineEdit_correo"));

        horizontalLayout_8->addWidget(lineEdit_correo);


        verticalLayout_3->addLayout(horizontalLayout_8);

        label_7 = new QLabel(CrearUsuario);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 540, 171, 131));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../Pictures/taxi.png")));
        pushButton_atras = new QPushButton(CrearUsuario);
        pushButton_atras->setObjectName(QString::fromUtf8("pushButton_atras"));
        pushButton_atras->setGeometry(QRect(10, 700, 83, 25));
        pushButton_atras->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);"));
        label_10 = new QLabel(CrearUsuario);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(380, 540, 221, 171));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../Pictures/gente5.png")));

        retranslateUi(CrearUsuario);

        QMetaObject::connectSlotsByName(CrearUsuario);
    } // setupUi

    void retranslateUi(QDialog *CrearUsuario)
    {
        CrearUsuario->setWindowTitle(QApplication::translate("CrearUsuario", "Dialog", nullptr));
        label_17->setText(QApplication::translate("CrearUsuario", "Crear Usuario", nullptr));
        label_6->setText(QString());
        groupBox->setTitle(QString());
        pushButton_crearUsuario->setText(QApplication::translate("CrearUsuario", "Crear Usuario", nullptr));
        checkBox_1->setText(QString());
        checkBox_2->setText(QApplication::translate("CrearUsuario", "Soy mayor de edad", nullptr));
        textBrowser->setHtml(QApplication::translate("CrearUsuario", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans, '; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Acepto mantener el sitio con informaci\303\263n ver\303\255dica y opiniones respetuosas que ayuden a los dem\303\241s usuarios. De lo contrario, estoy de acuerdo con que mi cuenta se elimine.</p></body></html>", nullptr));
        label_usuario->setText(QApplication::translate("CrearUsuario", "Usuario:", nullptr));
        label_password->setText(QApplication::translate("CrearUsuario", "Contrase\303\261a:", nullptr));
        label_cpassword->setText(QApplication::translate("CrearUsuario", "Confirmar contrase\303\261a:", nullptr));
        label_nombre->setText(QApplication::translate("CrearUsuario", "Nombre(s):", nullptr));
        label_apellido->setText(QApplication::translate("CrearUsuario", "Apellido(s):", nullptr));
        label_correo->setText(QApplication::translate("CrearUsuario", "Correo electr\303\263nico:", nullptr));
        label_7->setText(QString());
        pushButton_atras->setText(QApplication::translate("CrearUsuario", "Atr\303\241s", nullptr));
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CrearUsuario: public Ui_CrearUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARUSUARIO_H
