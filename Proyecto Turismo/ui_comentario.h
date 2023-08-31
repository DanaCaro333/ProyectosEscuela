/********************************************************************************
** Form generated from reading UI file 'comentario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMENTARIO_H
#define UI_COMENTARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Comentario
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *pushButton_eliminar;
    QVBoxLayout *verticalLayout;
    QLabel *label_nombre;
    QTextBrowser *textBrowser_comentario;
    QLabel *label;

    void setupUi(QWidget *Comentario)
    {
        if (Comentario->objectName().isEmpty())
            Comentario->setObjectName(QString::fromUtf8("Comentario"));
        Comentario->resize(386, 119);
        gridLayout = new QGridLayout(Comentario);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(Comentario);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 2, 2);

        pushButton_eliminar = new QPushButton(Comentario);
        pushButton_eliminar->setObjectName(QString::fromUtf8("pushButton_eliminar"));

        gridLayout->addWidget(pushButton_eliminar, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_nombre = new QLabel(Comentario);
        label_nombre->setObjectName(QString::fromUtf8("label_nombre"));

        verticalLayout->addWidget(label_nombre);

        textBrowser_comentario = new QTextBrowser(Comentario);
        textBrowser_comentario->setObjectName(QString::fromUtf8("textBrowser_comentario"));

        verticalLayout->addWidget(textBrowser_comentario);


        gridLayout->addLayout(verticalLayout, 1, 2, 2, 1);

        label = new QLabel(Comentario);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);


        retranslateUi(Comentario);

        QMetaObject::connectSlotsByName(Comentario);
    } // setupUi

    void retranslateUi(QWidget *Comentario)
    {
        Comentario->setWindowTitle(QApplication::translate("Comentario", "Form", nullptr));
        label_2->setText(QString());
        pushButton_eliminar->setText(QApplication::translate("Comentario", "X", nullptr));
        label_nombre->setText(QApplication::translate("Comentario", "TextLabel", nullptr));
        textBrowser_comentario->setHtml(QApplication::translate("Comentario", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans, '; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Comentario: public Ui_Comentario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMENTARIO_H
