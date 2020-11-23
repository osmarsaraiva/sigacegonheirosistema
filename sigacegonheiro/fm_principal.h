#ifndef FM_PRINCIPAL_H
#define FM_PRINCIPAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Fm_principal; }
QT_END_NAMESPACE

class Fm_principal : public QMainWindow
{
    Q_OBJECT

public:
    Fm_principal(QWidget *parent = nullptr);
    ~Fm_principal();

private:
    Ui::Fm_principal *ui;
};
#endif // FM_PRINCIPAL_H
