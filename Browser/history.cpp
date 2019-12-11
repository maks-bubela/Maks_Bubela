#include "history.h"
#include "ui_history.h"
#include "browser.h"
#include <QMainWindow>

History::History(QStringList *history, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::History)
{
    ui->setupUi(this);
    for (QString url : *history){
        ui->List_History->addItem(url);
    }
}

History::~History()
{
    delete ui;
}

void History::goHistory()
{

    Browser *mainWindow = new Browser();
        mainWindow->show();


}
