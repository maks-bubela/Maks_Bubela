#include "calck.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calck w;
    w.show();
    return a.exec();
}
