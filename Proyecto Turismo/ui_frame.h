/********************************************************************************
** Form generated from reading UI file 'frame.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_H
#define UI_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Frame
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_comentario;
    QTextBrowser *textBrowser_comentario;
    QPushButton *pushButton_eliminar;

    void setupUi(QFrame *Frame)
    {
        if (Frame->objectName().isEmpty())
            Frame->setObjectName(QString::fromUtf8("Frame"));
        Frame->resize(331, 129);
        gridLayout_2 = new QGridLayout(Frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(Frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_comentario = new QLabel(widget);
        label_comentario->setObjectName(QString::fromUtf8("label_comentario"));

        gridLayout->addWidget(label_comentario, 0, 0, 1, 1);

        textBrowser_comentario = new QTextBrowser(widget);
        textBrowser_comentario->setObjectName(QString::fromUtf8("textBrowser_comentario"));

        gridLayout->addWidget(textBrowser_comentario, 1, 0, 1, 1);

        pushButton_eliminar = new QPushButton(widget);
        pushButton_eliminar->setObjectName(QString::fromUtf8("pushButton_eliminar"));

        gridLayout->addWidget(pushButton_eliminar, 1, 1, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(Frame);

        QMetaObject::connectSlotsByName(Frame);
    } // setupUi

    void retranslateUi(QFrame *Frame)
    {
        Frame->setWindowTitle(QApplication::translate("Frame", "Frame", nullptr));
        label_comentario->setText(QApplication::translate("Frame", "Calis", nullptr));
        textBrowser_comentario->setHtml(QApplication::translate("Frame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans, '; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">fdshsfdhbsdfyhghb srdthet</p></body></html>", nullptr));
        pushButton_eliminar->setText(QApplication::translate("Frame", "Eliminar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Frame: public Ui_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_H
