/********************************************************************************
** Form generated from reading UI file 'subirfoto.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBIRFOTO_H
#define UI_SUBIRFOTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SubirFoto
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_agregar;
    QLabel *label_image;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SubirFoto)
    {
        if (SubirFoto->objectName().isEmpty())
            SubirFoto->setObjectName(QString::fromUtf8("SubirFoto"));
        SubirFoto->resize(458, 436);
        groupBox = new QGroupBox(SubirFoto);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 441, 381));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        pushButton_agregar = new QPushButton(groupBox);
        pushButton_agregar->setObjectName(QString::fromUtf8("pushButton_agregar"));
        pushButton_agregar->setGeometry(QRect(30, 30, 371, 25));
        label_image = new QLabel(groupBox);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(20, 70, 401, 281));
        buttonBox = new QDialogButtonBox(SubirFoto);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(140, 400, 166, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(SubirFoto);

        QMetaObject::connectSlotsByName(SubirFoto);
    } // setupUi

    void retranslateUi(QDialog *SubirFoto)
    {
        SubirFoto->setWindowTitle(QApplication::translate("SubirFoto", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("SubirFoto", "Agregar imagen", nullptr));
        pushButton_agregar->setText(QApplication::translate("SubirFoto", "Escoger imagen", nullptr));
        label_image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SubirFoto: public Ui_SubirFoto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBIRFOTO_H
