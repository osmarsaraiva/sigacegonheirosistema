#include "fm_principal.h"
#include "ui_fm_principal.h"
#include <QMessageBox>

Fm_principal::Fm_principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Fm_principal)
{
    ui->setupUi(this);

    logado=false;
    cadFechado.addFile(":/imagens/imgs/cadeado_fechado.png");
    cadAberto->addFile(":/imagens/imgs/cadeado_fechado.png");

    ui->btn_bloquear->setText("");
    ui->btn_bloquear->setIcon(*cadAberto);
    ui->statusBar->addWidget(ui->btn_bloquear);



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

