#include "cryptographer.h"
#include "ui_cryptographer.h"
#include <string.h>
#include "QString"
#include "math.h"


Cryptographer::Cryptographer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cryptographer)
{
    ui->setupUi(this);
    connect(ui->cesar, &QPushButton::clicked, this, &Cryptographer::Choice);
    connect(ui->vigener, &QPushButton::clicked, this, &Cryptographer::Choice2);
}

Cryptographer::~Cryptographer()
{
    delete ui;
}
string Cryptographer::Choice(){
    if (ui->crypt,&QPushButton::clicked)
        CesCrypt();
    if (ui->decrypt,&QPushButton::clicked)              //choice (crypt/decrypt)
        CesDecrypt();
}
string Cryptographer::Choice2(){
    if (ui->crypt,&QPushButton::clicked)
        VigCrypt();
    if (ui->decrypt,&QPushButton::clicked)
        VigDecrypt();
}
string Cryptographer::VigCrypt(){
    QString dotext,key;
    key=ui->key->text();
    string vigkey;
    vigkey=key.toStdString();
    string crypt;
    dotext=ui->text->text();
    crypt=dotext.toStdString();
    int keycount=0;
    int i=0;
    while(crypt[i]!=0){
        if (vigkey[keycount]==0)
            keycount=0;
        crypt[i]=((crypt[i]+vigkey[keycount])%26)+97;
        if (crypt[i]>122)
            crypt[i]=crypt[i]-26;
        i++;
        keycount++;
    }
    QString qstr = QString::fromStdString(crypt);
    ui->crytext->setText(qstr);
}
string Cryptographer::VigDecrypt(){
    QString dotext,key;
    key=ui->key->text();
    string vigkey;
    vigkey=key.toStdString();
    string decrypt;
    dotext=ui->text->text();
    decrypt=dotext.toStdString();
    int keycount=0;
    int i=0;
    while(decrypt[i]!=0){
        if (vigkey[keycount]==0)
            keycount=0;
        decrypt[i]=(((decrypt[i]+26)-vigkey[keycount])%26)+97;                //description Vigener decryption
        if (decrypt[i]>122)
            decrypt[i]=decrypt[i]-26;
        i++;
    }
    QString qstr = QString::fromStdString(decrypt);
    ui->crytext->setText(qstr);
}
string Cryptographer::CesCrypt()
{
    QString dotext,key;
    key=ui->key->text();
    int ceskey;
    bool ok;
    ceskey= key.toInt(&ok,10);
    string crypt;
    dotext=ui->text->text();
    crypt=dotext.toStdString();
    int i=0;
    while(crypt[i]!=0){
        crypt[i]=crypt[i]+ceskey;
        if (crypt[i]>122)
            crypt[i]=crypt[i]-26;
        i++;

    }
    QString qstr = QString::fromStdString(crypt);
    ui->crytext->setText(qstr);
}
string Cryptographer::CesDecrypt()
{
    QString dotext,key;
    key=ui->key->text();
    int ceskey;
    bool ok;
    ceskey= key.toInt(&ok,10);
    string decrypt;
    dotext=ui->text->text();
    decrypt=dotext.toStdString();
    int i=0;
    while(decrypt[i]!=0){
        decrypt[i]=decrypt[i]-ceskey;
        if (decrypt[i]<97)
            decrypt[i]=decrypt[i]+26;
        i++;

    }
    QString qstr = QString::fromStdString(decrypt);
    ui->crytext->setText(qstr);
}
