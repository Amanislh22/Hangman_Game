#include "perdu.h"
#include "ui_perdu.h"

perdu::perdu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::perdu)
{
    ui->setupUi(this);
    connect(ui->buttonBox->button(QDialogButtonBox::Cancel), &QDialogButtonBox::triggered, this, &Notification::close);
    connect(ui->buttonBox->button(QDialogButtonBox::Ok), &QDialogButtonBox::triggered, this, &Notification::restart);

}

perdu::~perdu()
{
    delete ui;
}

void Notification::restart(void){
//////////
}
