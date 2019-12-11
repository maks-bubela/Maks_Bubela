#include "KeyPress.h"
#include "browser.h"



void KeyPress::keyPressEvent(QKeyEvent *e)
{
    if(e->key() == Qt::Key_Enter)
    {
        //emit signalFromKeyboard();
    }
}



