/********************************************************************************
** Form generated from reading UI file 'infoos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOOS_H
#define UI_INFOOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoOS
{
public:
    QWidget *centralwidget;
    QLabel *sysOutput;
    QPushButton *go;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InfoOS)
    {
        if (InfoOS->objectName().isEmpty())
            InfoOS->setObjectName(QString::fromUtf8("InfoOS"));
        InfoOS->resize(800, 600);
        centralwidget = new QWidget(InfoOS);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sysOutput = new QLabel(centralwidget);
        sysOutput->setObjectName(QString::fromUtf8("sysOutput"));
        sysOutput->setGeometry(QRect(10, 0, 661, 511));
        go = new QPushButton(centralwidget);
        go->setObjectName(QString::fromUtf8("go"));
        go->setGeometry(QRect(320, 140, 121, 61));
        InfoOS->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InfoOS);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        InfoOS->setMenuBar(menubar);
        statusbar = new QStatusBar(InfoOS);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        InfoOS->setStatusBar(statusbar);

        retranslateUi(InfoOS);

        QMetaObject::connectSlotsByName(InfoOS);
    } // setupUi

    void retranslateUi(QMainWindow *InfoOS)
    {
        InfoOS->setWindowTitle(QApplication::translate("InfoOS", "InfoOS", nullptr));
        sysOutput->setText(QApplication::translate("InfoOS", "TextLabel", nullptr));
        go->setText(QApplication::translate("InfoOS", "Info about OS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoOS: public Ui_InfoOS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOOS_H
