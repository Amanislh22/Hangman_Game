#include "reset_notification.h"
#include "ui_reset_notification.h"

reset_notification::reset_notification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reset_notification)
{
    ui->setupUi(this);
}

reset_notification::~reset_notification()
{
    delete ui;
}
