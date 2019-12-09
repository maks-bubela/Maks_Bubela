#include "browser.h"
#include "KeyPress.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Browser w;
    w.show();
    return a.exec();
}
