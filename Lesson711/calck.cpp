#include "calck.h"
#include "ui_calck.h"
#include "QString"
#include "math.h"

Calck::Calck(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calck)
{
    ui->setupUi(this);
    connect(ui->addition, &QPushButton::clicked, this, &Calck::add);
    connect(ui->subtractions, &QPushButton::clicked, this, &Calck::subtractions);
    connect(ui->multiplication, &QPushButton::clicked, this, &Calck::multiplication);
    connect(ui->division, &QPushButton::clicked, this, &Calck::division);
    connect(ui->exponent, &QPushButton::clicked, this, &Calck::exponention);
    connect(ui->radical, &QPushButton::clicked, this, &Calck::radical);
    connect(ui->factorial, &QPushButton::clicked, this, &Calck::factorial);
}

Calck::~Calck()
{
    delete ui;
}

int Calck::TakeText1()
{
    QString strvalue1;
    int value1=0;
    bool ok;
    strvalue1=ui->UserInput1->text();
    value1= strvalue1.toInt(&ok,10);
    return (value1);
}
int Calck::TakeText2()
{
    QString strvalue2;
    int value2=0;
    bool ok;
    strvalue2=ui->UserInput2->text();
    value2= strvalue2.toInt(&ok,10);
    return (value2);
}

void Calck::add()
{
   int result=TakeText1()+TakeText2();
   ui->Output->setNum(result);
}

void Calck::subtractions()
{
    int result=TakeText1()-TakeText2();
    ui->Output->setNum(result);
}

void Calck::multiplication()
{
    int result=TakeText1()*TakeText2();
    ui->Output->setNum(result);
}
void Calck::division()
{
    float result=TakeText1()/TakeText2();
    ui->Output->setNum(result);
}
void Calck::exponention()
{
    int result=pow(TakeText1(),TakeText2());
    ui->Output->setNum(result);
}
void Calck::radical()
{
    float result=sqrt(TakeText1());
    ui->Output->setNum(result);
}
void Calck::factorial()
{
    int result=1;
    for(int i=1;i<=TakeText1();i++)
        result=result*i;

    ui->Output->setNum(result);
}

