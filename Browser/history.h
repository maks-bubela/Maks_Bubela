#ifndef HISTORY_H
#define HISTORY_H

#include <QDialog>
#include "browser.h"

namespace Ui {
class History;
}

class History : public QDialog
{
    Q_OBJECT

public:
    explicit History(QStringList *history, QWidget *parent = nullptr);
    ~History();

private:
    Ui::History *ui;
    void goHistory();

};

#endif // HISTORY_H
