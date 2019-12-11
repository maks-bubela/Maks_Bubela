#include "browser.h"
#include "ui_browser.h"
#include "KeyPress.h"
#include "history.h"
#include <fstream>
#include <QDebug>


Browser::Browser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Browser)
{
    ui->setupUi(this);
    mychrom = new QWebEngineView();
    ui->browindow->addWidget(mychrom);
    ui->progressBar->hide();
    ui->progressBar->setValue(0);


    connect(ui->Search, &QPushButton::clicked, this, &Browser::go);
    connect(ui->b_back, &QPushButton::clicked, this, &Browser::goBack);
    connect(ui->b_next, &QPushButton::clicked, this, &Browser::goNext);
    connect(mychrom, &QWebEngineView::urlChanged, this, &Browser::updateUrl);
    connect(mychrom, &QWebEngineView::loadStarted, this, &Browser::LoadStarted);
    connect(mychrom, &QWebEngineView::loadProgress, this, &Browser::LoadProgress);
    connect(mychrom, &QWebEngineView::loadFinished, this, &Browser::LoadFinished);
    connect(ui->b_history, &QPushButton::clicked, this, &Browser::showHistory);
    connect(ui->ulink, &Browser::signalFromKeyboard, this, &Browser::goEnter)
}

Browser::~Browser()
{
    delete ui;
}

void Browser::go()
{
    QString url=ui->ulink->text();
    if (url.indexOf("http://") ==-1 && url.indexOf("https://")==-1)         // function for go to page
        url = "http://" + url;
    mychrom->load(url);
}

void Browser::updateUrl(QUrl url)
{
    if(i){
        history.append(url.toString());
        ui->ulink->setText(url.toString());             // show url
        if (maxel!=counter)
            counter=maxel;
        counter++;
        maxel=counter;


        std::ofstream out("/home/maks/Git/Maks_Bubela/Browser/history.txt", std::ios::app);
        if (out.is_open())
        {
            out << history[counter-1].toStdString() << std::endl;
        }
        out.close();
    }
    i=1;
}

//////////////////////////////////////////
void Browser::LoadStarted()
{
    ui->progressBar->show();
}

void Browser::LoadFinished()                        //functions for progress bar
{
    ui->progressBar->hide();
}

void Browser::LoadProgress(int value)
{
    ui->progressBar->setValue(value);
}

void Browser::showHistory()
{
    History historyDialog(&history,this);
    historyDialog.exec();
}

void Browser::goBack()
{  if (counter-2>0){
   counter=counter-2;
   mychrom->load(history[counter]);
    }
   i=0;
}

void Browser::goNext()
{

    if (counter+2<maxel){
     counter=counter+2;
     mychrom->load(history[counter]);
    }
    i=0;

}

void Browser::keyPressEvent(QKeyEvent *e)
{
    if(e->key() == Qt::Key_Enter)
    {
        emit signalFromKeyboard(e);
    }

}

void Browser::goEnter(QKeyEvent *e)
{   if(e->key() == Qt::Key_Enter){
    QString url=ui->ulink->text();
    if (url.indexOf("http://") ==-1 && url.indexOf("https://")==-1)         // function for go to page
        url = "http://" + url;
    mychrom->load(url);
    }
}


//////////////////////////////////////////

