/********************************************************************************
** Form generated from reading UI file 'administracion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRACION_H
#define UI_ADMINISTRACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpcionesUsuario
{
public:
    QPushButton *pushButton_atras;
    QGroupBox *groupBox_3;
    QScrollBar *verticalScrollBar_3;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_3;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_ver_3;
    QScrollBar *verticalScrollBar;
    QGroupBox *groupBox_4;
    QScrollBar *verticalScrollBar_4;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_4;
    QTextBrowser *textBrowser_3;
    QPushButton *pushButton_ver_4;
    QScrollBar *verticalScrollBar_2;
    QToolButton *toolButton;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QDialog *OpcionesUsuario)
    {
        if (OpcionesUsuario->objectName().isEmpty())
            OpcionesUsuario->setObjectName(QString::fromUtf8("OpcionesUsuario"));
        OpcionesUsuario->resize(1036, 620);
        OpcionesUsuario->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        pushButton_atras = new QPushButton(OpcionesUsuario);
        pushButton_atras->setObjectName(QString::fromUtf8("pushButton_atras"));
        pushButton_atras->setGeometry(QRect(10, 590, 83, 25));
        pushButton_atras->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);"));
        groupBox_3 = new QGroupBox(OpcionesUsuario);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(80, 80, 431, 491));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);\n"
""));
        verticalScrollBar_3 = new QScrollBar(groupBox_3);
        verticalScrollBar_3->setObjectName(QString::fromUtf8("verticalScrollBar_3"));
        verticalScrollBar_3->setGeometry(QRect(450, 20, 20, 481));
        verticalScrollBar_3->setOrientation(Qt::Vertical);
        layoutWidget_6 = new QWidget(groupBox_3);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 30, 391, 72));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        textBrowser_2 = new QTextBrowser(layoutWidget_6);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        horizontalLayout_3->addWidget(textBrowser_2);

        pushButton_ver_3 = new QPushButton(layoutWidget_6);
        pushButton_ver_3->setObjectName(QString::fromUtf8("pushButton_ver_3"));

        horizontalLayout_3->addWidget(pushButton_ver_3);

        verticalScrollBar = new QScrollBar(groupBox_3);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(410, 20, 16, 471));
        verticalScrollBar->setOrientation(Qt::Vertical);
        groupBox_4 = new QGroupBox(OpcionesUsuario);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(540, 80, 431, 491));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);\n"
""));
        verticalScrollBar_4 = new QScrollBar(groupBox_4);
        verticalScrollBar_4->setObjectName(QString::fromUtf8("verticalScrollBar_4"));
        verticalScrollBar_4->setGeometry(QRect(450, 20, 20, 481));
        verticalScrollBar_4->setOrientation(Qt::Vertical);
        layoutWidget_7 = new QWidget(groupBox_4);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 90, 391, 81));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        textBrowser_3 = new QTextBrowser(layoutWidget_7);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));

        horizontalLayout_4->addWidget(textBrowser_3);

        pushButton_ver_4 = new QPushButton(layoutWidget_7);
        pushButton_ver_4->setObjectName(QString::fromUtf8("pushButton_ver_4"));

        horizontalLayout_4->addWidget(pushButton_ver_4);

        verticalScrollBar_2 = new QScrollBar(groupBox_4);
        verticalScrollBar_2->setObjectName(QString::fromUtf8("verticalScrollBar_2"));
        verticalScrollBar_2->setGeometry(QRect(410, 20, 16, 471));
        verticalScrollBar_2->setOrientation(Qt::Vertical);
        toolButton = new QToolButton(groupBox_4);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(380, 20, 29, 24));
        label_8 = new QLabel(OpcionesUsuario);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(180, 10, 691, 61));
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
        label_8->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(OpcionesUsuario);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 580, 181, 25));
        pushButton_3 = new QPushButton(OpcionesUsuario);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(910, 10, 121, 25));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 154, 154);"));

        retranslateUi(OpcionesUsuario);

        QMetaObject::connectSlotsByName(OpcionesUsuario);
    } // setupUi

    void retranslateUi(QDialog *OpcionesUsuario)
    {
        OpcionesUsuario->setWindowTitle(QApplication::translate("OpcionesUsuario", "Dialog", nullptr));
        pushButton_atras->setText(QApplication::translate("OpcionesUsuario", "Atr\303\241s", nullptr));
        groupBox_3->setTitle(QApplication::translate("OpcionesUsuario", "Comentarios/Valoraciones", nullptr));
        pushButton_ver_3->setText(QApplication::translate("OpcionesUsuario", "Eliminar", nullptr));
        groupBox_4->setTitle(QApplication::translate("OpcionesUsuario", "Reportes", nullptr));
        pushButton_ver_4->setText(QApplication::translate("OpcionesUsuario", "ver", nullptr));
        toolButton->setText(QApplication::translate("OpcionesUsuario", "...", nullptr));
        label_8->setText(QApplication::translate("OpcionesUsuario", "La Madriguera", nullptr));
        pushButton->setText(QApplication::translate("OpcionesUsuario", "Ver lugar", nullptr));
        pushButton_3->setText(QApplication::translate("OpcionesUsuario", "Eliminar Lugar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpcionesUsuario: public Ui_OpcionesUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRACION_H
