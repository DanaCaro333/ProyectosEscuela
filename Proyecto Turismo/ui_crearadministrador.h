/********************************************************************************
** Form generated from reading UI file 'crearadministrador.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREARADMINISTRADOR_H
#define UI_CREARADMINISTRADOR_H

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

class Ui_CrearAdministrador
{
public:
    QLabel *label_17;
    QLabel *label_7;
    QLabel *label_6;
    QPushButton *pushButton_atras;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QGroupBox *groupBox;
    QPushButton *pushButton_crearLugar;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QTextBrowser *textBrowser_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_12;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_usuario;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_password_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_nombre;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLineEdit *lineEdit_apellido;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QLineEdit *lineEdit_correo;

    void setupUi(QDialog *CrearAdministrador)
    {
        if (CrearAdministrador->objectName().isEmpty())
            CrearAdministrador->setObjectName(QString::fromUtf8("CrearAdministrador"));
        CrearAdministrador->resize(631, 772);
        label_17 = new QLabel(CrearAdministrador);
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
        label_7 = new QLabel(CrearAdministrador);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(450, 630, 171, 131));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../Pictures/taxi.png")));
        label_6 = new QLabel(CrearAdministrador);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(400, 0, 231, 101));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../Pictures/turis.png")));
        pushButton_atras = new QPushButton(CrearAdministrador);
        pushButton_atras->setObjectName(QString::fromUtf8("pushButton_atras"));
        pushButton_atras->setGeometry(QRect(10, 740, 83, 25));
        pushButton_atras->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);"));
        textBrowser = new QTextBrowser(CrearAdministrador);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(230, 120, 281, 91));
        label_3 = new QLabel(CrearAdministrador);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 80, 151, 151));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../Downloads/pipol.png")));
        groupBox = new QGroupBox(CrearAdministrador);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 240, 571, 391));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        pushButton_crearLugar = new QPushButton(groupBox);
        pushButton_crearLugar->setObjectName(QString::fromUtf8("pushButton_crearLugar"));
        pushButton_crearLugar->setGeometry(QRect(450, 350, 111, 25));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 240, 14, 15));
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 320, 151, 23));
        textBrowser_2 = new QTextBrowser(groupBox);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(30, 240, 521, 51));
        textBrowser_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 140, 381, 91));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout->addWidget(label_12);

        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout->addWidget(label_13);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_usuario = new QLineEdit(layoutWidget_2);
        lineEdit_usuario->setObjectName(QString::fromUtf8("lineEdit_usuario"));

        verticalLayout_2->addWidget(lineEdit_usuario);

        lineEdit_password = new QLineEdit(layoutWidget_2);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));

        verticalLayout_2->addWidget(lineEdit_password);

        lineEdit_password_2 = new QLineEdit(layoutWidget_2);
        lineEdit_password_2->setObjectName(QString::fromUtf8("lineEdit_password_2"));

        verticalLayout_2->addWidget(lineEdit_password_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 541, 95));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_nombre = new QLineEdit(layoutWidget);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));

        horizontalLayout_4->addWidget(lineEdit_nombre);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_10->addWidget(label_8);

        lineEdit_apellido = new QLineEdit(layoutWidget);
        lineEdit_apellido->setObjectName(QString::fromUtf8("lineEdit_apellido"));

        horizontalLayout_10->addWidget(lineEdit_apellido);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_8->addWidget(label_11);

        lineEdit_correo = new QLineEdit(layoutWidget);
        lineEdit_correo->setObjectName(QString::fromUtf8("lineEdit_correo"));

        horizontalLayout_8->addWidget(lineEdit_correo);


        verticalLayout_3->addLayout(horizontalLayout_8);


        retranslateUi(CrearAdministrador);

        QMetaObject::connectSlotsByName(CrearAdministrador);
    } // setupUi

    void retranslateUi(QDialog *CrearAdministrador)
    {
        CrearAdministrador->setWindowTitle(QApplication::translate("CrearAdministrador", "Dialog", nullptr));
        label_17->setText(QApplication::translate("CrearAdministrador", "Crear Administrador", nullptr));
        label_7->setText(QString());
        label_6->setText(QString());
        pushButton_atras->setText(QApplication::translate("CrearAdministrador", "Atr\303\241s", nullptr));
        textBrowser->setHtml(QApplication::translate("CrearAdministrador", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans, '; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\241Da a conocer tu negocio! </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Empieza ingresando tus datos para crear tu cuenta de administrador y procede a llenar la informaci\303\263n de tu negocio.</p></body></html>", nullptr));
        label_3->setText(QString());
        groupBox->setTitle(QString());
        pushButton_crearLugar->setText(QApplication::translate("CrearAdministrador", "Crear Lugar", nullptr));
        checkBox->setText(QString());
        checkBox_2->setText(QApplication::translate("CrearAdministrador", "Soy mayor de edad", nullptr));
        textBrowser_2->setHtml(QApplication::translate("CrearAdministrador", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans, '; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Acepto mantener el sitio con informaci\303\263n ver\303\255dica y opiniones respetuosas que ayuden a los dem\303\241s usuarios. De lo contrario, estoy de acuerdo con que mi cuenta se elimine.</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("CrearAdministrador", "Usuario:", nullptr));
        label_12->setText(QApplication::translate("CrearAdministrador", "Contrase\303\261a:", nullptr));
        label_13->setText(QApplication::translate("CrearAdministrador", "Confirmar contrase\303\261a:", nullptr));
        label_5->setText(QApplication::translate("CrearAdministrador", "Nombre(s):", nullptr));
        label_8->setText(QApplication::translate("CrearAdministrador", "Apellido(s):", nullptr));
        label_11->setText(QApplication::translate("CrearAdministrador", "Correo electr\303\263nico:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrearAdministrador: public Ui_CrearAdministrador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARADMINISTRADOR_H
