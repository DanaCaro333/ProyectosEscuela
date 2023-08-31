/********************************************************************************
** Form generated from reading UI file 'mostrarlugar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRARLUGAR_H
#define UI_MOSTRARLUGAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MostrarLugar
{
public:
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser_descripcion;
    QPushButton *pushButton_iniciar_2;
    QPushButton *pushButton_atras;
    QLabel *label_nombre;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_estrella1;
    QLabel *label_estrella2;
    QLabel *label_estrella3;
    QLabel *label_estrella4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_costo1;
    QLabel *label_costo2;
    QLabel *label_costo3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *label_telefono;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_43;
    QLabel *label_lunes;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_44;
    QLabel *label_martes;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_45;
    QLabel *label_miercoles;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_46;
    QLabel *label_jueves;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_47;
    QLabel *label_viernes;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_48;
    QLabel *label_sabado;
    QHBoxLayout *horizontalLayout_42;
    QLabel *label_49;
    QLabel *label_domingo;
    QPushButton *pushButton_opinion;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_comentarios;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_null;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLabel *label_21;
    QPushButton *pushButton_editar;
    QLabel *label_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_sucursales;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_foto;
    QSplitter *splitter;
    QPushButton *pushButton_ImagenL;
    QPushButton *pushButton_ImagenR;

    void setupUi(QDialog *MostrarLugar)
    {
        if (MostrarLugar->objectName().isEmpty())
            MostrarLugar->setObjectName(QString::fromUtf8("MostrarLugar"));
        MostrarLugar->resize(1014, 633);
        MostrarLugar->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 200, 215);"));
        groupBox_2 = new QGroupBox(MostrarLugar);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(350, 230, 391, 121));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(12);
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser_descripcion = new QTextBrowser(groupBox_2);
        textBrowser_descripcion->setObjectName(QString::fromUtf8("textBrowser_descripcion"));
        textBrowser_descripcion->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));

        gridLayout->addWidget(textBrowser_descripcion, 0, 0, 1, 1);

        pushButton_iniciar_2 = new QPushButton(MostrarLugar);
        pushButton_iniciar_2->setObjectName(QString::fromUtf8("pushButton_iniciar_2"));
        pushButton_iniciar_2->setEnabled(true);
        pushButton_iniciar_2->setGeometry(QRect(970, 10, 31, 31));
        pushButton_atras = new QPushButton(MostrarLugar);
        pushButton_atras->setObjectName(QString::fromUtf8("pushButton_atras"));
        pushButton_atras->setGeometry(QRect(10, 600, 83, 25));
        pushButton_atras->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);"));
        label_nombre = new QLabel(MostrarLugar);
        label_nombre->setObjectName(QString::fromUtf8("label_nombre"));
        label_nombre->setGeometry(QRect(0, 0, 1021, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Jamrul"));
        font1.setPointSize(36);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        label_nombre->setFont(font1);
        label_nombre->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);\n"
"font: 75 36pt \"Jamrul\";\n"
"color: rgb(73, 60, 107);"));
        label_nombre->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(MostrarLugar);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(350, 90, 391, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_estrella1 = new QLabel(layoutWidget);
        label_estrella1->setObjectName(QString::fromUtf8("label_estrella1"));
        label_estrella1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_estrella1->setPixmap(QPixmap(QString::fromUtf8("../Downloads/iconocalif.png")));

        horizontalLayout_11->addWidget(label_estrella1);

        label_estrella2 = new QLabel(layoutWidget);
        label_estrella2->setObjectName(QString::fromUtf8("label_estrella2"));
        label_estrella2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_estrella2->setPixmap(QPixmap(QString::fromUtf8("../Downloads/iconocalif.png")));

        horizontalLayout_11->addWidget(label_estrella2);

        label_estrella3 = new QLabel(layoutWidget);
        label_estrella3->setObjectName(QString::fromUtf8("label_estrella3"));
        label_estrella3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_estrella3->setPixmap(QPixmap(QString::fromUtf8("../Downloads/iconocalif.png")));

        horizontalLayout_11->addWidget(label_estrella3);

        label_estrella4 = new QLabel(layoutWidget);
        label_estrella4->setObjectName(QString::fromUtf8("label_estrella4"));
        label_estrella4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_estrella4->setPixmap(QPixmap(QString::fromUtf8("../Downloads/iconocalif.png")));

        horizontalLayout_11->addWidget(label_estrella4);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_costo1 = new QLabel(layoutWidget);
        label_costo1->setObjectName(QString::fromUtf8("label_costo1"));
        label_costo1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_costo1->setPixmap(QPixmap(QString::fromUtf8("../Pictures/iconoprecio.png")));

        horizontalLayout_2->addWidget(label_costo1);

        label_costo2 = new QLabel(layoutWidget);
        label_costo2->setObjectName(QString::fromUtf8("label_costo2"));
        label_costo2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_costo2->setPixmap(QPixmap(QString::fromUtf8("../Pictures/iconoprecio.png")));

        horizontalLayout_2->addWidget(label_costo2);

        label_costo3 = new QLabel(layoutWidget);
        label_costo3->setObjectName(QString::fromUtf8("label_costo3"));
        label_costo3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_costo3->setPixmap(QPixmap(QString::fromUtf8("../Pictures/iconoprecio.png")));

        horizontalLayout_2->addWidget(label_costo3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_8);

        label_telefono = new QLabel(layoutWidget);
        label_telefono->setObjectName(QString::fromUtf8("label_telefono"));
        label_telefono->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";\n"
"background-color: rgb(255, 255, 255);"));
        label_telefono->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_telefono);


        verticalLayout->addLayout(horizontalLayout_3);

        layoutWidget1 = new QWidget(MostrarLugar);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(747, 100, 241, 251));
        verticalLayout_8 = new QVBoxLayout(layoutWidget1);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        label_43 = new QLabel(layoutWidget1);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setLayoutDirection(Qt::LeftToRight);
        label_43->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));
        label_43->setAlignment(Qt::AlignCenter);

        horizontalLayout_36->addWidget(label_43);

        label_lunes = new QLabel(layoutWidget1);
        label_lunes->setObjectName(QString::fromUtf8("label_lunes"));
        label_lunes->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));
        label_lunes->setAlignment(Qt::AlignCenter);

        horizontalLayout_36->addWidget(label_lunes);


        verticalLayout_8->addLayout(horizontalLayout_36);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        label_44 = new QLabel(layoutWidget1);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));
        label_44->setAlignment(Qt::AlignCenter);

        horizontalLayout_37->addWidget(label_44);

        label_martes = new QLabel(layoutWidget1);
        label_martes->setObjectName(QString::fromUtf8("label_martes"));
        label_martes->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));
        label_martes->setAlignment(Qt::AlignCenter);

        horizontalLayout_37->addWidget(label_martes);


        verticalLayout_8->addLayout(horizontalLayout_37);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        label_45 = new QLabel(layoutWidget1);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));
        label_45->setAlignment(Qt::AlignCenter);

        horizontalLayout_38->addWidget(label_45);

        label_miercoles = new QLabel(layoutWidget1);
        label_miercoles->setObjectName(QString::fromUtf8("label_miercoles"));
        label_miercoles->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));
        label_miercoles->setAlignment(Qt::AlignCenter);

        horizontalLayout_38->addWidget(label_miercoles);


        verticalLayout_8->addLayout(horizontalLayout_38);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        label_46 = new QLabel(layoutWidget1);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));
        label_46->setAlignment(Qt::AlignCenter);

        horizontalLayout_39->addWidget(label_46);

        label_jueves = new QLabel(layoutWidget1);
        label_jueves->setObjectName(QString::fromUtf8("label_jueves"));
        label_jueves->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));
        label_jueves->setAlignment(Qt::AlignCenter);

        horizontalLayout_39->addWidget(label_jueves);


        verticalLayout_8->addLayout(horizontalLayout_39);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        label_47 = new QLabel(layoutWidget1);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));
        label_47->setAlignment(Qt::AlignCenter);

        horizontalLayout_40->addWidget(label_47);

        label_viernes = new QLabel(layoutWidget1);
        label_viernes->setObjectName(QString::fromUtf8("label_viernes"));
        label_viernes->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));
        label_viernes->setAlignment(Qt::AlignCenter);

        horizontalLayout_40->addWidget(label_viernes);


        verticalLayout_8->addLayout(horizontalLayout_40);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        label_48 = new QLabel(layoutWidget1);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));
        label_48->setAlignment(Qt::AlignCenter);

        horizontalLayout_41->addWidget(label_48);

        label_sabado = new QLabel(layoutWidget1);
        label_sabado->setObjectName(QString::fromUtf8("label_sabado"));
        label_sabado->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));
        label_sabado->setAlignment(Qt::AlignCenter);

        horizontalLayout_41->addWidget(label_sabado);


        verticalLayout_8->addLayout(horizontalLayout_41);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        label_49 = new QLabel(layoutWidget1);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));
        label_49->setAlignment(Qt::AlignCenter);

        horizontalLayout_42->addWidget(label_49);

        label_domingo = new QLabel(layoutWidget1);
        label_domingo->setObjectName(QString::fromUtf8("label_domingo"));
        label_domingo->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));
        label_domingo->setAlignment(Qt::AlignCenter);

        horizontalLayout_42->addWidget(label_domingo);


        verticalLayout_8->addLayout(horizontalLayout_42);

        pushButton_opinion = new QPushButton(MostrarLugar);
        pushButton_opinion->setObjectName(QString::fromUtf8("pushButton_opinion"));
        pushButton_opinion->setEnabled(true);
        pushButton_opinion->setGeometry(QRect(840, 590, 151, 25));
        pushButton_opinion->setStyleSheet(QString::fromUtf8("background-color: rgb(194, 243, 179);"));
        groupBox = new QGroupBox(MostrarLugar);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(350, 360, 641, 221));
        groupBox->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_comentarios = new QWidget();
        scrollAreaWidgetContents_comentarios->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_comentarios"));
        scrollAreaWidgetContents_comentarios->setGeometry(QRect(0, 0, 615, 173));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_comentarios);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_null = new QLabel(scrollAreaWidgetContents_comentarios);
        label_null->setObjectName(QString::fromUtf8("label_null"));
        label_null->setStyleSheet(QString::fromUtf8("font: 14pt \"DejaVu Sans Mono\";\n"
"color: rgb(85, 87, 83);"));
        label_null->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_null);

        scrollArea->setWidget(scrollAreaWidgetContents_comentarios);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        layoutWidget_7 = new QWidget(MostrarLugar);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(880, 70, 91, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget_7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_7);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));

        horizontalLayout->addWidget(label_9);

        label_21 = new QLabel(layoutWidget_7);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));

        horizontalLayout->addWidget(label_21);

        pushButton_editar = new QPushButton(MostrarLugar);
        pushButton_editar->setObjectName(QString::fromUtf8("pushButton_editar"));
        pushButton_editar->setEnabled(true);
        pushButton_editar->setGeometry(QRect(370, 590, 451, 25));
        pushButton_editar->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 221, 151);"));
        label_2 = new QLabel(MostrarLugar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 90, 391, 131));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        layoutWidget2 = new QWidget(MostrarLugar);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 400, 331, 181));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Gargi\";"));

        verticalLayout_5->addWidget(label_3);

        scrollArea_2 = new QScrollArea(layoutWidget2);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_sucursales = new QWidget();
        scrollAreaWidgetContents_sucursales->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_sucursales"));
        scrollAreaWidgetContents_sucursales->setGeometry(QRect(0, 0, 327, 145));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_sucursales);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea_2->setWidget(scrollAreaWidgetContents_sucursales);

        verticalLayout_5->addWidget(scrollArea_2);

        label_foto = new QLabel(MostrarLugar);
        label_foto->setObjectName(QString::fromUtf8("label_foto"));
        label_foto->setGeometry(QRect(10, 70, 321, 261));
        label_foto->setPixmap(QPixmap(QString::fromUtf8("../Pictures/mad.png")));
        splitter = new QSplitter(MostrarLugar);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 349, 331, 25));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_ImagenL = new QPushButton(splitter);
        pushButton_ImagenL->setObjectName(QString::fromUtf8("pushButton_ImagenL"));
        splitter->addWidget(pushButton_ImagenL);
        pushButton_ImagenR = new QPushButton(splitter);
        pushButton_ImagenR->setObjectName(QString::fromUtf8("pushButton_ImagenR"));
        splitter->addWidget(pushButton_ImagenR);
        layoutWidget->raise();
        label_2->raise();
        layoutWidget->raise();
        groupBox_2->raise();
        pushButton_atras->raise();
        label_nombre->raise();
        layoutWidget->raise();
        pushButton_opinion->raise();
        pushButton_iniciar_2->raise();
        groupBox->raise();
        layoutWidget_7->raise();
        pushButton_editar->raise();

        retranslateUi(MostrarLugar);

        QMetaObject::connectSlotsByName(MostrarLugar);
    } // setupUi

    void retranslateUi(QDialog *MostrarLugar)
    {
        MostrarLugar->setWindowTitle(QApplication::translate("MostrarLugar", "Dialog", nullptr));
        groupBox_2->setTitle(QApplication::translate("MostrarLugar", "Descripci\303\263n:", nullptr));
        pushButton_iniciar_2->setText(QApplication::translate("MostrarLugar", "!", nullptr));
        pushButton_atras->setText(QApplication::translate("MostrarLugar", "Atr\303\241s", nullptr));
        label_nombre->setText(QApplication::translate("MostrarLugar", "La Madriguera", nullptr));
        label_estrella1->setText(QString());
        label_estrella2->setText(QString());
        label_estrella3->setText(QString());
        label_estrella4->setText(QString());
        label_costo1->setText(QString());
        label_costo2->setText(QString());
        label_costo3->setText(QString());
        label_8->setText(QApplication::translate("MostrarLugar", "Tel\303\251fono:", nullptr));
        label_telefono->setText(QApplication::translate("MostrarLugar", "33234223423", nullptr));
        label_43->setText(QApplication::translate("MostrarLugar", "L", nullptr));
        label_lunes->setText(QApplication::translate("MostrarLugar", "14:00 - 23:00", nullptr));
        label_44->setText(QApplication::translate("MostrarLugar", "M", nullptr));
        label_martes->setText(QApplication::translate("MostrarLugar", "14:00 - 23:00", nullptr));
        label_45->setText(QApplication::translate("MostrarLugar", "M", nullptr));
        label_miercoles->setText(QApplication::translate("MostrarLugar", "14:00 - 23:00", nullptr));
        label_46->setText(QApplication::translate("MostrarLugar", "J", nullptr));
        label_jueves->setText(QApplication::translate("MostrarLugar", "14:00 - 23:00", nullptr));
        label_47->setText(QApplication::translate("MostrarLugar", "V", nullptr));
        label_viernes->setText(QApplication::translate("MostrarLugar", "14:00 - 23:00", nullptr));
        label_48->setText(QApplication::translate("MostrarLugar", "S", nullptr));
        label_sabado->setText(QApplication::translate("MostrarLugar", "Cerrado", nullptr));
        label_49->setText(QApplication::translate("MostrarLugar", "D", nullptr));
        label_domingo->setText(QApplication::translate("MostrarLugar", "Cerrado", nullptr));
        pushButton_opinion->setText(QApplication::translate("MostrarLugar", "Agregar tu valoraci\303\263n", nullptr));
        groupBox->setTitle(QApplication::translate("MostrarLugar", "Comentarios", nullptr));
        label_null->setText(QApplication::translate("MostrarLugar", "No hay comentarios de este negocio", nullptr));
        label_9->setText(QApplication::translate("MostrarLugar", "De:", nullptr));
        label_21->setText(QApplication::translate("MostrarLugar", "A:", nullptr));
        pushButton_editar->setText(QApplication::translate("MostrarLugar", "Editar Informacion", nullptr));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("MostrarLugar", "Sucursales:", nullptr));
        label_foto->setText(QString());
        pushButton_ImagenL->setText(QApplication::translate("MostrarLugar", "<", nullptr));
        pushButton_ImagenR->setText(QApplication::translate("MostrarLugar", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MostrarLugar: public Ui_MostrarLugar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRARLUGAR_H
