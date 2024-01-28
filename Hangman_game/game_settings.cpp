#include "game_settings.h"
#include "ui_game_settings.h"
#include <QPushButton>


Game_settings::Game_settings(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Game_settings)
{
    ui->setupUi(this);
}

Game_settings::~Game_settings()
{
    delete ui;
}



void Game_settings::on_pushButton_clicked()
{
    //ui->pushButton->
}

