/********************************************************************************
** Form generated from reading UI file 'crearlugar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREARLUGAR_H
#define UI_CREARLUGAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrearLugar
{
public:
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *pushButton_atras;
    QGroupBox *groupBox;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QPushButton *pushButton_galeria;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox_lugar;
    QPushButton *pushButton_aceptar;
    QGroupBox *groupBox_2;
    QPlainTextEdit *plainTextEdit_descripcion;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label;
    QLineEdit *lineEdit_nombre;
    QLabel *label_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_sucursales;
    QVBoxLayout *verticalLayout;
    QLabel *label_null;
    QPushButton *pushButton_agregardireccion;
    QLabel *label_15;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QTimeEdit *timeEdit_LA;
    QTimeEdit *timeEdit_LC;
    QCheckBox *checkBox_L;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QTimeEdit *timeEdit_MA;
    QTimeEdit *timeEdit_MC;
    QCheckBox *checkBox_M;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QTimeEdit *timeEdit_IA;
    QTimeEdit *timeEdit_IC;
    QCheckBox *checkBox_I;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QTimeEdit *timeEdit_JA;
    QTimeEdit *timeEdit_JC;
    QCheckBox *checkBox_J;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QTimeEdit *timeEdit_VA;
    QTimeEdit *timeEdit_VC;
    QCheckBox *checkBox_V;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QTimeEdit *timeEdit_SA;
    QTimeEdit *timeEdit_SC;
    QCheckBox *checkBox_S;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QTimeEdit *timeEdit_DA;
    QTimeEdit *timeEdit_DC;
    QCheckBox *checkBox_D;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_22;
    QLineEdit *lineEdit_telefono;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLabel *label_19;
    QLabel *label_3;

    void setupUi(QDialog *CrearLugar)
    {
        if (CrearLugar->objectName().isEmpty())
            CrearLugar->setObjectName(QString::fromUtf8("CrearLugar"));
        CrearLugar->resize(910, 738);
        CrearLugar->setLayoutDirection(Qt::LeftToRight);
        CrearLugar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_16 = new QLabel(CrearLugar);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(650, 0, 261, 81));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../Pictures/turis.png")));
        label_17 = new QLabel(CrearLugar);
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
        pushButton_atras = new QPushButton(CrearLugar);
        pushButton_atras->setObjectName(QString::fromUtf8("pushButton_atras"));
        pushButton_atras->setGeometry(QRect(10, 700, 83, 25));
        pushButton_atras->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);"));
        groupBox = new QGroupBox(CrearLugar);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 90, 891, 591));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 195, 221);"));
        layoutWidget_3 = new QWidget(groupBox);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 380, 331, 27));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        pushButton_galeria = new QPushButton(layoutWidget_3);
        pushButton_galeria->setObjectName(QString::fromUtf8("pushButton_galeria"));

        horizontalLayout_7->addWidget(pushButton_galeria);

        layoutWidget_7 = new QWidget(groupBox);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(20, 340, 461, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        radioButton_1 = new QRadioButton(layoutWidget_7);
        radioButton_1->setObjectName(QString::fromUtf8("radioButton_1"));

        horizontalLayout_5->addWidget(radioButton_1);

        radioButton_2 = new QRadioButton(layoutWidget_7);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_5->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget_7);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_5->addWidget(radioButton_3);


        horizontalLayout_3->addLayout(horizontalLayout_5);

        layoutWidget_4 = new QWidget(groupBox);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 300, 461, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        comboBox_lugar = new QComboBox(layoutWidget_4);
        comboBox_lugar->setObjectName(QString::fromUtf8("comboBox_lugar"));
        comboBox_lugar->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(221, 212, 255);\n"
"selection-color: rgb(92, 53, 102);"));

        horizontalLayout_4->addWidget(comboBox_lugar);

        pushButton_aceptar = new QPushButton(groupBox);
        pushButton_aceptar->setObjectName(QString::fromUtf8("pushButton_aceptar"));
        pushButton_aceptar->setGeometry(QRect(190, 550, 539, 25));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 420, 861, 121));
        plainTextEdit_descripcion = new QPlainTextEdit(groupBox_2);
        plainTextEdit_descripcion->setObjectName(QString::fromUtf8("plainTextEdit_descripcion"));
        plainTextEdit_descripcion->setGeometry(QRect(10, 30, 841, 81));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 509, 31));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_16->addWidget(label);

        lineEdit_nombre = new QLineEdit(layoutWidget);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));

        horizontalLayout_16->addWidget(lineEdit_nombre);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 110, 81, 16));
        scrollArea_2 = new QScrollArea(groupBox);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(20, 130, 521, 111));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_sucursales = new QWidget();
        scrollAreaWidgetContents_sucursales->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_sucursales"));
        scrollAreaWidgetContents_sucursales->setGeometry(QRect(0, 0, 519, 109));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_sucursales);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_null = new QLabel(scrollAreaWidgetContents_sucursales);
        label_null->setObjectName(QString::fromUtf8("label_null"));
        label_null->setStyleSheet(QString::fromUtf8("font: 20pt \"DejaVu Sans Mono\";\n"
"color: rgb(211, 215, 207);"));

        verticalLayout->addWidget(label_null);

        scrollArea_2->setWidget(scrollAreaWidgetContents_sucursales);
        pushButton_agregardireccion = new QPushButton(groupBox);
        pushButton_agregardireccion->setObjectName(QString::fromUtf8("pushButton_agregardireccion"));
        pushButton_agregardireccion->setGeometry(QRect(210, 260, 131, 25));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(540, 30, 81, 21));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(550, 60, 325, 361));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        timeEdit_LA = new QTimeEdit(layoutWidget1);
        timeEdit_LA->setObjectName(QString::fromUtf8("timeEdit_LA"));
        timeEdit_LA->setEnabled(false);

        horizontalLayout_8->addWidget(timeEdit_LA);

        timeEdit_LC = new QTimeEdit(layoutWidget1);
        timeEdit_LC->setObjectName(QString::fromUtf8("timeEdit_LC"));
        timeEdit_LC->setEnabled(false);
        timeEdit_LC->setMouseTracking(true);
        timeEdit_LC->setTabletTracking(false);
        timeEdit_LC->setAutoFillBackground(false);

        horizontalLayout_8->addWidget(timeEdit_LC);

        checkBox_L = new QCheckBox(layoutWidget1);
        checkBox_L->setObjectName(QString::fromUtf8("checkBox_L"));
        checkBox_L->setEnabled(true);
        checkBox_L->setMouseTracking(true);
        checkBox_L->setTabletTracking(false);
        checkBox_L->setAutoFillBackground(false);
        checkBox_L->setCheckable(true);
        checkBox_L->setChecked(true);
        checkBox_L->setTristate(false);

        horizontalLayout_8->addWidget(checkBox_L);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        timeEdit_MA = new QTimeEdit(layoutWidget1);
        timeEdit_MA->setObjectName(QString::fromUtf8("timeEdit_MA"));
        timeEdit_MA->setEnabled(false);

        horizontalLayout_9->addWidget(timeEdit_MA);

        timeEdit_MC = new QTimeEdit(layoutWidget1);
        timeEdit_MC->setObjectName(QString::fromUtf8("timeEdit_MC"));
        timeEdit_MC->setEnabled(false);

        horizontalLayout_9->addWidget(timeEdit_MC);

        checkBox_M = new QCheckBox(layoutWidget1);
        checkBox_M->setObjectName(QString::fromUtf8("checkBox_M"));
        checkBox_M->setChecked(true);

        horizontalLayout_9->addWidget(checkBox_M);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        timeEdit_IA = new QTimeEdit(layoutWidget1);
        timeEdit_IA->setObjectName(QString::fromUtf8("timeEdit_IA"));
        timeEdit_IA->setEnabled(false);

        horizontalLayout_10->addWidget(timeEdit_IA);

        timeEdit_IC = new QTimeEdit(layoutWidget1);
        timeEdit_IC->setObjectName(QString::fromUtf8("timeEdit_IC"));
        timeEdit_IC->setEnabled(false);

        horizontalLayout_10->addWidget(timeEdit_IC);

        checkBox_I = new QCheckBox(layoutWidget1);
        checkBox_I->setObjectName(QString::fromUtf8("checkBox_I"));
        checkBox_I->setChecked(true);

        horizontalLayout_10->addWidget(checkBox_I);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_11->addWidget(label_11);

        timeEdit_JA = new QTimeEdit(layoutWidget1);
        timeEdit_JA->setObjectName(QString::fromUtf8("timeEdit_JA"));
        timeEdit_JA->setEnabled(false);

        horizontalLayout_11->addWidget(timeEdit_JA);

        timeEdit_JC = new QTimeEdit(layoutWidget1);
        timeEdit_JC->setObjectName(QString::fromUtf8("timeEdit_JC"));
        timeEdit_JC->setEnabled(false);
        timeEdit_JC->setMaximumTime(QTime(23, 59, 59));

        horizontalLayout_11->addWidget(timeEdit_JC);

        checkBox_J = new QCheckBox(layoutWidget1);
        checkBox_J->setObjectName(QString::fromUtf8("checkBox_J"));
        checkBox_J->setChecked(true);

        horizontalLayout_11->addWidget(checkBox_J);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        timeEdit_VA = new QTimeEdit(layoutWidget1);
        timeEdit_VA->setObjectName(QString::fromUtf8("timeEdit_VA"));
        timeEdit_VA->setEnabled(false);

        horizontalLayout_12->addWidget(timeEdit_VA);

        timeEdit_VC = new QTimeEdit(layoutWidget1);
        timeEdit_VC->setObjectName(QString::fromUtf8("timeEdit_VC"));
        timeEdit_VC->setEnabled(false);

        horizontalLayout_12->addWidget(timeEdit_VC);

        checkBox_V = new QCheckBox(layoutWidget1);
        checkBox_V->setObjectName(QString::fromUtf8("checkBox_V"));
        checkBox_V->setChecked(true);

        horizontalLayout_12->addWidget(checkBox_V);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_13->addWidget(label_13);

        timeEdit_SA = new QTimeEdit(layoutWidget1);
        timeEdit_SA->setObjectName(QString::fromUtf8("timeEdit_SA"));
        timeEdit_SA->setEnabled(false);

        horizontalLayout_13->addWidget(timeEdit_SA);

        timeEdit_SC = new QTimeEdit(layoutWidget1);
        timeEdit_SC->setObjectName(QString::fromUtf8("timeEdit_SC"));
        timeEdit_SC->setEnabled(false);

        horizontalLayout_13->addWidget(timeEdit_SC);

        checkBox_S = new QCheckBox(layoutWidget1);
        checkBox_S->setObjectName(QString::fromUtf8("checkBox_S"));
        checkBox_S->setChecked(true);

        horizontalLayout_13->addWidget(checkBox_S);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_14->addWidget(label_14);

        timeEdit_DA = new QTimeEdit(layoutWidget1);
        timeEdit_DA->setObjectName(QString::fromUtf8("timeEdit_DA"));
        timeEdit_DA->setEnabled(false);

        horizontalLayout_14->addWidget(timeEdit_DA);

        timeEdit_DC = new QTimeEdit(layoutWidget1);
        timeEdit_DC->setObjectName(QString::fromUtf8("timeEdit_DC"));
        timeEdit_DC->setEnabled(false);

        horizontalLayout_14->addWidget(timeEdit_DC);

        checkBox_D = new QCheckBox(layoutWidget1);
        checkBox_D->setObjectName(QString::fromUtf8("checkBox_D"));
        checkBox_D->setMouseTracking(true);
        checkBox_D->setChecked(true);

        horizontalLayout_14->addWidget(checkBox_D);


        verticalLayout_3->addLayout(horizontalLayout_14);

        layoutWidget_5 = new QWidget(groupBox);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(20, 70, 223, 27));
        horizontalLayout_29 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        horizontalLayout_29->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_29->addWidget(label_22);

        lineEdit_telefono = new QLineEdit(layoutWidget_5);
        lineEdit_telefono->setObjectName(QString::fromUtf8("lineEdit_telefono"));
        lineEdit_telefono->setLayoutDirection(Qt::LeftToRight);
        lineEdit_telefono->setMaxLength(10);

        horizontalLayout_29->addWidget(lineEdit_telefono);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(630, 40, 161, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        label_19 = new QLabel(layoutWidget2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout->addWidget(label_19);

        label_3 = new QLabel(CrearLugar);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(410, 30, 16, 17));

        retranslateUi(CrearLugar);

        QMetaObject::connectSlotsByName(CrearLugar);
    } // setupUi

    void retranslateUi(QDialog *CrearLugar)
    {
        CrearLugar->setWindowTitle(QApplication::translate("CrearLugar", "Dialog", nullptr));
        label_16->setText(QString());
        label_17->setText(QApplication::translate("CrearLugar", "A\303\261adir un lugar", nullptr));
        pushButton_atras->setText(QApplication::translate("CrearLugar", "Atr\303\241s", nullptr));
        groupBox->setTitle(QString());
        label_7->setText(QApplication::translate("CrearLugar", "Fotos:", nullptr));
        pushButton_galeria->setText(QApplication::translate("CrearLugar", "Galer\303\255a de fotos", nullptr));
        label_5->setText(QApplication::translate("CrearLugar", "Costos:", nullptr));
        radioButton_1->setText(QApplication::translate("CrearLugar", "$", nullptr));
        radioButton_2->setText(QApplication::translate("CrearLugar", "$$", nullptr));
        radioButton_3->setText(QApplication::translate("CrearLugar", "$$$", nullptr));
        label_4->setText(QApplication::translate("CrearLugar", "Tipo de lugar:", nullptr));
        pushButton_aceptar->setText(QApplication::translate("CrearLugar", "Aceptar", nullptr));
        groupBox_2->setTitle(QApplication::translate("CrearLugar", "Descripci\303\263n:", nullptr));
        label->setText(QApplication::translate("CrearLugar", "Nombre del lugar:", nullptr));
        lineEdit_nombre->setText(QString());
        label_2->setText(QApplication::translate("CrearLugar", "Sucursales", nullptr));
        label_null->setText(QApplication::translate("CrearLugar", "No ha ingresado sucursales", nullptr));
        pushButton_agregardireccion->setText(QApplication::translate("CrearLugar", "Agregar direcci\303\263n", nullptr));
        label_15->setText(QApplication::translate("CrearLugar", "Horarios:", nullptr));
        label_8->setText(QApplication::translate("CrearLugar", "Lunes", nullptr));
        timeEdit_LA->setDisplayFormat(QApplication::translate("CrearLugar", "hh:mm", nullptr));
        timeEdit_LC->setDisplayFormat(QApplication::translate("CrearLugar", "hh:mm", nullptr));
        checkBox_L->setText(QApplication::translate("CrearLugar", "Cerrado", nullptr));
        label_9->setText(QApplication::translate("CrearLugar", "Martes", nullptr));
        timeEdit_MA->setDisplayFormat(QApplication::translate("CrearLugar", "hh:mm", nullptr));
        timeEdit_MC->setDisplayFormat(QApplication::translate("CrearLugar", "hh:mm", nullptr));
        checkBox_M->setText(QApplication::translate("CrearLugar", "Cerrado", nullptr));
        label_10->setText(QApplication::translate("CrearLugar", "Mi\303\251rcoles", nullptr));
        timeEdit_IA->setDisplayFormat(QApplication::translate("CrearLugar", "hh:mm", nullptr));
        timeEdit_IC->setDisplayFormat(QApplication::translate("CrearLugar", "hh:mm", nullptr));
        checkBox_I->setText(QApplication::translate("CrearLugar", "Cerrado", nullptr));
        label_11->setText(QApplication::translate("CrearLugar", "Jueves", nullptr));
        timeEdit_JA->setDisplayFormat(QApplication::translate("CrearLugar", "hh:mm", nullptr));
        timeEdit_JC->setDisplayFormat(QApplication::translate("CrearLugar", "hh:mm", nullptr));
        checkBox_J->setText(QApplication::translate("CrearLugar", "Cerrado", nullptr));
        label_12->setText(QApplication::translate("CrearLugar", "Viernes", nullptr));
        timeEdit_VA->setDisplayFormat(QApplication::translate("CrearLugar", "hh:mm", nullptr));
        timeEdit_VC->setDisplayFormat(QApplication::translate("CrearLugar", "hh:mm", nullptr));
        checkBox_V->setText(QApplication::translate("CrearLugar", "Cerrado", nullptr));
        label_13->setText(QApplication::translate("CrearLugar", "S\303\241bado", nullptr));
        timeEdit_SA->setDisplayFormat(QApplication::translate("CrearLugar", "hh:mm", nullptr));
        timeEdit_SC->setDisplayFormat(QApplication::translate("CrearLugar", "hh:mm", nullptr));
        checkBox_S->setText(QApplication::translate("CrearLugar", "Cerrado", nullptr));
        label_14->setText(QApplication::translate("CrearLugar", "Domingo", nullptr));
        timeEdit_DA->setDisplayFormat(QApplication::translate("CrearLugar", "hh:mm", nullptr));
        timeEdit_DC->setDisplayFormat(QApplication::translate("CrearLugar", "hh:mm", nullptr));
        checkBox_D->setText(QApplication::translate("CrearLugar", "Cerrado", nullptr));
        label_22->setText(QApplication::translate("CrearLugar", "Tel\303\251fono:", nullptr));
        lineEdit_telefono->setText(QString());
        label_6->setText(QApplication::translate("CrearLugar", "De:", nullptr));
        label_19->setText(QApplication::translate("CrearLugar", "A:", nullptr));
        label_3->setText(QApplication::translate("CrearLugar", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrearLugar: public Ui_CrearLugar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARLUGAR_H
