#include "won.h"
#include "ui_won.h"
#include <QObject>
#include <QPushButton>
#include<QDebug>
Won::Won(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Won)
{
    ui->setupUi(this);
    connect(ui->buttonBox->button(QDialogButtonBox::Cancel), &QPushButton::clicked, this, &Won::Close);
    connect(ui->buttonBox->button(QDialogButtonBox::Ok), &QPushButton::clicked, this, &Won::restart);



}

Won::~Won()
{
    delete ui;
}
void Won::restart(void){
    qDebug()<<"restart";
    emit send_action(replay);
    this->close();
    //////////
}
void Won::Close(void){
    qDebug()<<"back to home";
    emit send_action(Home);
this->close();

}
