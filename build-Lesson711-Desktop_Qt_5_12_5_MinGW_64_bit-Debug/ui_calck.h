/********************************************************************************
** Form generated from reading UI file 'calck.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCK_H
#define UI_CALCK_H

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

class Ui_Calck
{
public:
    QWidget *centralwidget;
    QLabel *Output;
    QLineEdit *UserInput1;
    QPushButton *division;
    QPushButton *multiplication;
    QPushButton *radical;
    QPushButton *exponent;
    QPushButton *factorial;
    QPushButton *addition;
    QLineEdit *UserInput2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *subtractions;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calck)
    {
        if (Calck->objectName().isEmpty())
            Calck->setObjectName(QString::fromUtf8("Calck"));
        Calck->resize(800, 600);
        centralwidget = new QWidget(Calck);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Output = new QLabel(centralwidget);
        Output->setObjectName(QString::fromUtf8("Output"));
        Output->setGeometry(QRect(360, 140, 141, 231));
        UserInput1 = new QLineEdit(centralwidget);
        UserInput1->setObjectName(QString::fromUtf8("UserInput1"));
        UserInput1->setGeometry(QRect(160, 140, 201, 31));
        division = new QPushButton(centralwidget);
        division->setObjectName(QString::fromUtf8("division"));
        division->setGeometry(QRect(260, 240, 101, 41));
        multiplication = new QPushButton(centralwidget);
        multiplication->setObjectName(QString::fromUtf8("multiplication"));
        multiplication->setGeometry(QRect(160, 240, 101, 41));
        radical = new QPushButton(centralwidget);
        radical->setObjectName(QString::fromUtf8("radical"));
        radical->setGeometry(QRect(260, 280, 101, 41));
        exponent = new QPushButton(centralwidget);
        exponent->setObjectName(QString::fromUtf8("exponent"));
        exponent->setGeometry(QRect(160, 280, 101, 41));
        factorial = new QPushButton(centralwidget);
        factorial->setObjectName(QString::fromUtf8("factorial"));
        factorial->setGeometry(QRect(160, 320, 201, 51));
        addition = new QPushButton(centralwidget);
        addition->setObjectName(QString::fromUtf8("addition"));
        addition->setGeometry(QRect(160, 200, 101, 41));
        UserInput2 = new QLineEdit(centralwidget);
        UserInput2->setObjectName(QString::fromUtf8("UserInput2"));
        UserInput2->setGeometry(QRect(160, 170, 201, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 140, 91, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 175, 91, 21));
        subtractions = new QPushButton(centralwidget);
        subtractions->setObjectName(QString::fromUtf8("subtractions"));
        subtractions->setGeometry(QRect(260, 200, 101, 41));
        Calck->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calck);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Calck->setMenuBar(menubar);
        statusbar = new QStatusBar(Calck);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calck->setStatusBar(statusbar);

        retranslateUi(Calck);

        QMetaObject::connectSlotsByName(Calck);
    } // setupUi

    void retranslateUi(QMainWindow *Calck)
    {
        Calck->setWindowTitle(QApplication::translate("Calck", "Calck", nullptr));
        Output->setText(QApplication::translate("Calck", "Result", nullptr));
        division->setText(QApplication::translate("Calck", "/", nullptr));
        multiplication->setText(QApplication::translate("Calck", "*", nullptr));
        radical->setText(QApplication::translate("Calck", "\342\210\232", nullptr));
        exponent->setText(QApplication::translate("Calck", "^", nullptr));
        factorial->setText(QApplication::translate("Calck", "n!", nullptr));
        addition->setText(QApplication::translate("Calck", "+", nullptr));
        label->setText(QApplication::translate("Calck", "\320\237\320\265\321\200\320\262\320\276\320\265 \321\207\320\270\321\201\320\273\320\276", nullptr));
        label_2->setText(QApplication::translate("Calck", "\320\222\321\202\320\276\321\200\320\276\320\265 \321\207\320\270\321\201\320\273\320\276", nullptr));
        subtractions->setText(QApplication::translate("Calck", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calck: public Ui_Calck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCK_H
