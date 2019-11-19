#ifndef INFOOS_H
#define INFOOS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class InfoOS; }
QT_END_NAMESPACE

class InfoOS : public QMainWindow
{
    Q_OBJECT

public:
    InfoOS(QWidget *parent = nullptr);
    ~InfoOS();

private:
    Ui::InfoOS *ui;
private slots:
    void InfoSet();
};
#endif // INFOOS_H
