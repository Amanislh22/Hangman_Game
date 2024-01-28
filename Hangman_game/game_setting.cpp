#include "game_setting.h"
#include "ui_game_setting.h"

game_setting::game_setting(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::game_setting)
{
    ui->setupUi(this);
}

game_setting::~game_setting()
{
    delete ui;
}
