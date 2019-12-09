/********************************************************************************
** Form generated from reading UI file 'browser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSER_H
#define UI_BROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Browser
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *b_back;
    QPushButton *b_next;
    QPushButton *Search;
    QLineEdit *ulink;
    QPushButton *b_history;
    QVBoxLayout *browindow;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Browser)
    {
        if (Browser->objectName().isEmpty())
            Browser->setObjectName(QString::fromUtf8("Browser"));
        Browser->resize(800, 600);
        centralwidget = new QWidget(Browser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        b_back = new QPushButton(centralwidget);
        b_back->setObjectName(QString::fromUtf8("b_back"));
        b_back->setIconSize(QSize(12, 12));

        horizontalLayout->addWidget(b_back);

        b_next = new QPushButton(centralwidget);
        b_next->setObjectName(QString::fromUtf8("b_next"));
        b_next->setIconSize(QSize(12, 12));

        horizontalLayout->addWidget(b_next);

        Search = new QPushButton(centralwidget);
        Search->setObjectName(QString::fromUtf8("Search"));

        horizontalLayout->addWidget(Search);

        ulink = new QLineEdit(centralwidget);
        ulink->setObjectName(QString::fromUtf8("ulink"));

        horizontalLayout->addWidget(ulink);

        b_history = new QPushButton(centralwidget);
        b_history->setObjectName(QString::fromUtf8("b_history"));

        horizontalLayout->addWidget(b_history);


        verticalLayout->addLayout(horizontalLayout);

        browindow = new QVBoxLayout();
        browindow->setObjectName(QString::fromUtf8("browindow"));

        verticalLayout->addLayout(browindow);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        Browser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Browser);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Browser->setMenuBar(menubar);
        statusbar = new QStatusBar(Browser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Browser->setStatusBar(statusbar);

        retranslateUi(Browser);

        QMetaObject::connectSlotsByName(Browser);
    } // setupUi

    void retranslateUi(QMainWindow *Browser)
    {
        Browser->setWindowTitle(QApplication::translate("Browser", "Browser", nullptr));
        b_back->setText(QApplication::translate("Browser", "<-", nullptr));
        b_next->setText(QApplication::translate("Browser", "->", nullptr));
        Search->setText(QApplication::translate("Browser", "Search", nullptr));
        b_history->setText(QApplication::translate("Browser", "History", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Browser: public Ui_Browser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSER_H
