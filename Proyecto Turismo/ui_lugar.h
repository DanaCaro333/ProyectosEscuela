/********************************************************************************
** Form generated from reading UI file 'lugar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LUGAR_H
#define UI_LUGAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lugar
{
public:
    QFormLayout *formLayout;
    QLabel *label_foto;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QLabel *label_nombre;
    QPushButton *pushButton_ver;
    QTextBrowser *textBrowser_descripcion;

    void setupUi(QWidget *Lugar)
    {
        if (Lugar->objectName().isEmpty())
            Lugar->setObjectName(QString::fromUtf8("Lugar"));
        Lugar->resize(681, 183);
        Lugar->setAutoFillBackground(false);
        formLayout = new QFormLayout(Lugar);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_foto = new QLabel(Lugar);
        label_foto->setObjectName(QString::fromUtf8("label_foto"));
        label_foto->setPixmap(QPixmap(QString::fromUtf8("../Pictures/mad.png")));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_foto);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(Lugar);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label_nombre = new QLabel(splitter);
        label_nombre->setObjectName(QString::fromUtf8("label_nombre"));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_nombre->setFont(font);
        label_nombre->setAlignment(Qt::AlignCenter);
        splitter->addWidget(label_nombre);
        pushButton_ver = new QPushButton(splitter);
        pushButton_ver->setObjectName(QString::fromUtf8("pushButton_ver"));
        splitter->addWidget(pushButton_ver);

        verticalLayout->addWidget(splitter);

        textBrowser_descripcion = new QTextBrowser(Lugar);
        textBrowser_descripcion->setObjectName(QString::fromUtf8("textBrowser_descripcion"));
        textBrowser_descripcion->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));

        verticalLayout->addWidget(textBrowser_descripcion);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout);


        retranslateUi(Lugar);

        QMetaObject::connectSlotsByName(Lugar);
    } // setupUi

    void retranslateUi(QWidget *Lugar)
    {
        Lugar->setWindowTitle(QApplication::translate("Lugar", "Form", nullptr));
        label_foto->setText(QString());
        label_nombre->setText(QApplication::translate("Lugar", "Calis", nullptr));
        pushButton_ver->setText(QApplication::translate("Lugar", "Ver", nullptr));
        textBrowser_descripcion->setHtml(QApplication::translate("Lugar", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Gargi'; font-size:12pt; font-weight:72; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans, '; font-size:10pt; font-weight:400;\">fdshsfdhbsdfyhghb srdthet</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lugar: public Ui_Lugar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LUGAR_H
