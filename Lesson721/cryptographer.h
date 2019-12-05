#ifndef CRYPTOGRAPHER_H
#define CRYPTOGRAPHER_H
#include <string.h>
using namespace std;
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Cryptographer; }
QT_END_NAMESPACE

class Cryptographer : public QMainWindow
{
    Q_OBJECT

public:
    Cryptographer(QWidget *parent = nullptr);
    ~Cryptographer();

private:
    Ui::Cryptographer *ui;
private slots:
    void CesCrypt();
    void CesDecrypt();
    void VigCrypt();
    void VigDecrypt();
    void Choice();
    void Choice2();
};

#endif // CRYPTOGRAPHER_H
