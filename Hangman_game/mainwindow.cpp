#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QHeaderView>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    music_wid = new play_music(this);
    keyboard_wid = new Key_board(this);
    ui->volume_label_main->setText(QString("Volume: %1").arg(music_wid->get_volume_level()));
    ui->stackedWidget_2->addWidget(music_wid);
    ui->stackedWidget->setCurrentIndex(0);
//    ui->wid
    ui->verticalLayout_14->addWidget(keyboard_wid);
    QPixmap pixmap(":/new/images_hangman/1.jpg");
    ui->image_label->setPixmap(pixmap);
    ui->image_label->setFixedSize(pixmap.size());
    int numCols = 5; // Change this to the desired number of columns 'n'
    QTableWidget *tableWidget = new QTableWidget(1, numCols);

    // Set the column width to 20
//    for (int col = 0; col < numCols; ++col) {
//        tableWidget->setColumnWidth(col, 50);
//    }

    // Set the table line thickness to 1
    tableWidget->setLineWidth(3);

    // Fill the table with sample data
    for (int col = 0; col < numCols; ++col) {
        QTableWidgetItem *item = new QTableWidgetItem(QString(("*")));
        tableWidget->setItem(0, col, item);
    }

    // Set header hidden (no column and row names)
    tableWidget->horizontalHeader()->setVisible(false);
    tableWidget->verticalHeader()->setVisible(false);
    tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
    tableWidget->verticalHeader()->setStretchLastSection(true);
    tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->verticalLayout_15->addWidget(tableWidget);
//    ui->widget_keyboard->setWidget();
    ui->verticalLayout_15->setAlignment(Qt::AlignHCenter);

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


void MainWindow::on_single_plyer_btn_clicked()
{
ui->stackedWidget->setCurrentIndex(1);// set game single player mode page

}


