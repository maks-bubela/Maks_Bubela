#include "infoos.h"
#include "ui_infoos.h"
#include "QString"
#include <QSysInfo>

InfoOS::InfoOS(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::InfoOS)
{
    ui->setupUi(this);
    connect(ui->go, &QPushButton::clicked, this, &InfoOS::InfoSet);
}

InfoOS::~InfoOS()
{
    delete ui;
}

void InfoOS::InfoSet()
{
    ui->sysOutput->setText(QSysInfo::prettyProductName()+"\nCPU : "+QSysInfo::buildCpuArchitecture()+"\nHost name : "+QSysInfo::machineHostName());
}

