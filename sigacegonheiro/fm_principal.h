#ifndef FM_PRINCIPAL_H
#define FM_PRINCIPAL_H

#include <QMainWindow>
#include <QtSql/QSql>

QT_BEGIN_NAMESPACE
namespace Ui { class Fm_principal; }
QT_END_NAMESPACE

class Fm_principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit Fm_principal(QWidget *parent = nullptr);
    ~Fm_principal();
    QIcon cadFechado;
    QIcon *cadAberto= new QIcon();
    bool bloqueado;
    bool logado;

    QString nome, acesso_usuario;


private slots:
    void on_btn_bloquear_clicked();


private:
    Ui::Fm_principal *ui;
};
#endif // FM_PRINCIPAL_H
