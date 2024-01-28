#include "notification.h"
#include "ui_notification.h"
#include <QDialog>

notification::notification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::notification)
{
    ui->setupUi(this);
    connect(ui->buttonBox->button(QDialogButtonBox::Cancel), &QDialogButtonBox::triggered, this, &Notification::close);
    connect(ui->buttonBox->button(QDialogButtonBox::Ok), &QDialogButtonBox::triggered, this, &Notification::replay);


)
}

notification::~notification()
{
    delete ui;
}
void Notification::replay(void){
//////////
}
