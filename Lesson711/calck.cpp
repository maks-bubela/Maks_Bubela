#include "calck.h"
#include "ui_calck.h"
#include "QString"

Calck::Calck(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calck)
{
    ui->setupUi(this);
}

Calck::~Calck()
{
    delete ui;
}

void Calck::TakeText()
{
    QString strvalue;
    int value;
    bool ok;
    strvalue=ui->UserInput->text();
    value= strvalue.toInt(&ok,10);


}

