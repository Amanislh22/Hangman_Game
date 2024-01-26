#include "single_player.h"
#include "ui_single_player.h"

single_player::single_player(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::single_player)
{
    ui->setupUi(this);
}

single_player::~single_player()
{
    delete ui;
}
