#include "infoos.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InfoOS w;
    w.show();
    return a.exec();
}
