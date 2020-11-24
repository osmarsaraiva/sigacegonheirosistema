#include "fm_principal.h"
#include "ui_fm_principal.h"
#include <QMessageBox>

Fm_principal::Fm_principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Fm_principal)
{
    ui->setupUi(this);

    QString local = qApp ->applicationDirPath();
    QString banco = local + "/db/sqlitesiga.db";
    bancoDeDados.setDatabaseName(banco);

    if(!bancoDeDados.ope()){
        QMessageBox::warning(this, "ERRO", "Erro de conexão ao banco de dados");
    }
}

Fm_principal::~Fm_principal()
{
    delete ui;
}

