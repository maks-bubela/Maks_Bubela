#ifndef CALCK_H
#define CALCK_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calck; }
QT_END_NAMESPACE

class Calck : public QMainWindow
{
    Q_OBJECT

public:
    Calck(QWidget *parent = nullptr);
    ~Calck();

private:
    Ui::Calck *ui;
private slots:
    int TakeText1();
    int TakeText2();
    void add();
    void subtractions();
    void multiplication();
    void division();
    void exponention();
    void radical();
    void factorial();
};
#endif // CALCK_H
