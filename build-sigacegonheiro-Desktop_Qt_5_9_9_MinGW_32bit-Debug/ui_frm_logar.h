/********************************************************************************
** Form generated from reading UI file 'frm_logar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_LOGAR_H
#define UI_FRM_LOGAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frm_logar
{
public:
    QDialogButtonBox *btn_cancelar;
    QLabel *label_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_username;
    QLineEdit *txt_senha;

    void setupUi(QDialog *frm_logar)
    {
        if (frm_logar->objectName().isEmpty())
            frm_logar->setObjectName(QStringLiteral("frm_logar"));
        frm_logar->resize(273, 171);
        btn_cancelar = new QDialogButtonBox(frm_logar);
        btn_cancelar->setObjectName(QStringLiteral("btn_cancelar"));
        btn_cancelar->setGeometry(QRect(60, 120, 156, 23));
        btn_cancelar->setOrientation(Qt::Horizontal);
        btn_cancelar->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_2 = new QLabel(frm_logar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(42, 72, 34, 16));
        widget = new QWidget(frm_logar);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(41, 41, 190, 24));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        txt_username = new QLineEdit(widget);
        txt_username->setObjectName(QStringLiteral("txt_username"));

        horizontalLayout->addWidget(txt_username);


        verticalLayout->addLayout(horizontalLayout);

        txt_senha = new QLineEdit(frm_logar);
        txt_senha->setObjectName(QStringLiteral("txt_senha"));
        txt_senha->setGeometry(QRect(102, 72, 131, 20));
        txt_senha->setEchoMode(QLineEdit::Password);

        retranslateUi(frm_logar);
        QObject::connect(btn_cancelar, SIGNAL(accepted()), frm_logar, SLOT(accept()));
        QObject::connect(btn_cancelar, SIGNAL(rejected()), frm_logar, SLOT(reject()));

        QMetaObject::connectSlotsByName(frm_logar);
    } // setupUi

    void retranslateUi(QDialog *frm_logar)
    {
        frm_logar->setWindowTitle(QApplication::translate("frm_logar", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("frm_logar", "Senha:", Q_NULLPTR));
        label->setText(QApplication::translate("frm_logar", "Username:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frm_logar: public Ui_frm_logar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_LOGAR_H
