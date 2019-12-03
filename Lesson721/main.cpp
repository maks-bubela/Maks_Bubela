#include "cryptographer.h"
#include <string.h>
using namespace std;

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Cryptographer w;
    w.show();
    return a.exec();
}
