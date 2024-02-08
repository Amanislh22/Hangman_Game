#include "perdu.h"
#include "ui_perdu.h"
#include <QObject>
#include <QPushButton>
#include<QDebug>
perdu::perdu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::perdu)
{
    ui->setupUi(this);
    connect(ui->buttonBox->button(QDialogButtonBox::Cancel), &QPushButton::clicked, this, &perdu::Close);
    connect(ui->buttonBox->button(QDialogButtonBox::Ok), &QPushButton::clicked, this, &perdu::restart);

}

perdu::~perdu()
{
    delete ui;
}

void perdu::restart(void){
    qDebug()<<"restart";
    emit send_action(replay);
    this->close();
//////////
}
void perdu::Close(void){
    qDebug()<<"back to home";
    emit send_action(Home);
    this->close();
    //////////
}
