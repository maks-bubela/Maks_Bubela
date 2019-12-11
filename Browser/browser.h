#ifndef BROWSER_H
#define BROWSER_H

#include <QMainWindow>
#include <QWebEngineView>
#include "history.h"
#include <QKeyEvent>


QT_BEGIN_NAMESPACE
namespace Ui { class Browser; }
QT_END_NAMESPACE

class Browser : public QMainWindow
{
    Q_OBJECT

public:
     Browser (QWidget *parent = nullptr);
    ~Browser();
signals :
    void signalFromKeyboard(QKeyEvent *e);

protected slots:
    void go();
    void updateUrl(QUrl url);
    void LoadStarted();
    void LoadFinished();
    void LoadProgress(int value);
    void showHistory();
    void goBack();
    void goNext();
    void keyPressEvent(QKeyEvent *e);
    void goEnter(QKeyEvent *e);



private:
    Ui::Browser *ui;
    QWebEngineView *mychrom;
    QStringList history;
    int counter=0,maxel=0;
    bool i,k;

};

#endif // BROWSER_H
