#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    music_wid = new play_music(this);
    ui->volume_label_main->setText(QString("Volume: %1").arg(music_wid->get_volume_level()));
    ui->stackedWidget_2->addWidget(music_wid);
    ui->stackedWidget->setCurrentIndex(0);

}

MainWindow::~MainWindow()
{
//    delete play_audio;
    delete ui;
}


void MainWindow::on_exit_btn_clicked()
{
    this->close();
}




void MainWindow::on_Home_page_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_settings_page_btn_clicked()
{
ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_volume_settings_clicked()
{
ui->stackedWidget_2->setCurrentWidget(music_wid);
ui->stackedWidget_2->show();
}


void MainWindow::on_Mute_btn_toggled(bool checked)
{
music_wid->mute_music(checked);
if (checked == true)
    ui->volume_label_main->setText(QString("Volume: %1").arg(music_wid->get_volume_level()));
else
    ui->volume_label_main->setText(QString("Muted "));

qDebug()<< "ff"<<   checked ;
}

