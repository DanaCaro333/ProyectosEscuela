/********************************************************************************
** Form generated from reading UI file 'valoracion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALORACION_H
#define UI_VALORACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Valoracion
{
public:
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_nombre;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *comboBox_estrella;
    QPlainTextEdit *plainTextEdit_comentario;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Valoracion)
    {
        if (Valoracion->objectName().isEmpty())
            Valoracion->setObjectName(QString::fromUtf8("Valoracion"));
        Valoracion->resize(476, 407);
        Valoracion->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        groupBox = new QGroupBox(Valoracion);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 451, 351));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 210, 131, 17));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 140, 91, 17));
        label_nombre = new QLabel(groupBox);
        label_nombre->setObjectName(QString::fromUtf8("label_nombre"));
        label_nombre->setGeometry(QRect(30, 40, 399, 49));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        label_nombre->setFont(font);
        label_nombre->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_nombre->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 120, 251, 63));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../Pictures/estrella.png")));

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../Pictures/estrella.png")));

        horizontalLayout->addWidget(label_5);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../Pictures/estrella.png")));

        horizontalLayout->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../Pictures/estrella.png")));

        horizontalLayout->addWidget(label_9);


        verticalLayout_2->addLayout(horizontalLayout);

        comboBox_estrella = new QComboBox(layoutWidget);
        comboBox_estrella->setObjectName(QString::fromUtf8("comboBox_estrella"));

        verticalLayout_2->addWidget(comboBox_estrella);

        plainTextEdit_comentario = new QPlainTextEdit(groupBox);
        plainTextEdit_comentario->setObjectName(QString::fromUtf8("plainTextEdit_comentario"));
        plainTextEdit_comentario->setGeometry(QRect(10, 230, 431, 101));
        buttonBox = new QDialogButtonBox(Valoracion);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(150, 370, 166, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Valoracion);

        QMetaObject::connectSlotsByName(Valoracion);
    } // setupUi

    void retranslateUi(QDialog *Valoracion)
    {
        Valoracion->setWindowTitle(QApplication::translate("Valoracion", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Valoracion", "Opini\303\263n", nullptr));
        label_3->setText(QApplication::translate("Valoracion", "Opinion (opcional):", nullptr));
        label->setText(QApplication::translate("Valoracion", "Calificaci\303\263n:", nullptr));
        label_nombre->setText(QApplication::translate("Valoracion", "La madriguera", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Valoracion: public Ui_Valoracion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALORACION_H
