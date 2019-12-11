#ifndef KEYPRESS_H
#define KEYPRESS_H

#endif // KEYPRESS_H
#include <QWidget>
#include <QtGui>
#include <QLineEdit>
#include <browser.h>
class KeyPress : public QLineEdit
{
    Q_OBJECT
public:
    KeyPress(QWidget *parent);
signals :
    void signalFromKeyboard();
public:
    virtual void keyPressEvent(QKeyEvent *e);
public slots:
   void onKeyPressed();


};


