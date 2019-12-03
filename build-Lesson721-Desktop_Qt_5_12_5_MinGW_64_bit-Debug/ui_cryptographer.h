/********************************************************************************
** Form generated from reading UI file 'cryptographer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRYPTOGRAPHER_H
#define UI_CRYPTOGRAPHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cryptographer
{
public:
    QWidget *centralwidget;
    QLineEdit *text;
    QLabel *crytext;
    QPushButton *cesar;
    QPushButton *vigener;
    QPushButton *crypt;
    QPushButton *decrypt;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *key;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Cryptographer)
    {
        if (Cryptographer->objectName().isEmpty())
            Cryptographer->setObjectName(QString::fromUtf8("Cryptographer"));
        Cryptographer->resize(800, 600);
        centralwidget = new QWidget(Cryptographer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        text = new QLineEdit(centralwidget);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(170, 130, 181, 31));
        crytext = new QLabel(centralwidget);
        crytext->setObjectName(QString::fromUtf8("crytext"));
        crytext->setGeometry(QRect(170, 250, 271, 71));
        cesar = new QPushButton(centralwidget);
        cesar->setObjectName(QString::fromUtf8("cesar"));
        cesar->setGeometry(QRect(170, 190, 93, 61));
        vigener = new QPushButton(centralwidget);
        vigener->setObjectName(QString::fromUtf8("vigener"));
        vigener->setGeometry(QRect(260, 190, 93, 61));
        crypt = new QPushButton(centralwidget);
        crypt->setObjectName(QString::fromUtf8("crypt"));
        crypt->setGeometry(QRect(350, 130, 93, 31));
        decrypt = new QPushButton(centralwidget);
        decrypt->setObjectName(QString::fromUtf8("decrypt"));
        decrypt->setGeometry(QRect(350, 160, 93, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 170, 55, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 140, 55, 16));
        key = new QLineEdit(centralwidget);
        key->setObjectName(QString::fromUtf8("key"));
        key->setGeometry(QRect(170, 160, 181, 31));
        Cryptographer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Cryptographer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Cryptographer->setMenuBar(menubar);
        statusbar = new QStatusBar(Cryptographer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Cryptographer->setStatusBar(statusbar);

        retranslateUi(Cryptographer);

        QMetaObject::connectSlotsByName(Cryptographer);
    } // setupUi

    void retranslateUi(QMainWindow *Cryptographer)
    {
        Cryptographer->setWindowTitle(QApplication::translate("Cryptographer", "Cryptographer", nullptr));
        crytext->setText(QApplication::translate("Cryptographer", "TextLabel", nullptr));
        cesar->setText(QApplication::translate("Cryptographer", "Cesar", nullptr));
        vigener->setText(QApplication::translate("Cryptographer", "Vigener", nullptr));
        crypt->setText(QApplication::translate("Cryptographer", "Crypt", nullptr));
        decrypt->setText(QApplication::translate("Cryptographer", "Decrypt", nullptr));
        label->setText(QApplication::translate("Cryptographer", "Key", nullptr));
        label_2->setText(QApplication::translate("Cryptographer", "Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cryptographer: public Ui_Cryptographer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRYPTOGRAPHER_H
