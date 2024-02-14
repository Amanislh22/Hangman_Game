#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QHeaderView>
#include <QObject>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //toDO::
    // create sort c++ qt
    // when sorting transform every word to lowercase,
    // creat a funtion that sets and restes fthe game every time
    // test function that prints the tree format
    // delete data from tree
    // game settings ui
    ui->setupUi(this);
    music_wid = new play_music(this);
    keyboard_wid = new Key_board(this);
    game_set_wid = new game_settings(this);

    win_notif= new Won(this);
    lost_notif= new perdu(this);
    QObject::connect(keyboard_wid, &Key_board::sendKeyboardInput, this, &MainWindow::RecieveKyeboradInput);
    QObject::connect(lost_notif, &perdu::send_action, this, &MainWindow::set_playing_state);
    QObject::connect(win_notif, &Won::send_action, this, &MainWindow::set_playing_state);
    QObject::connect(game_set_wid, &game_settings::update_dict_language, this, &MainWindow::update_dict_lang);


    ui->volume_label_main->setText(QString("Volume: %1").arg(music_wid->get_volume_level()));
    ui->stackedWidget_2->addWidget(music_wid);
    ui->stackedWidget_2->addWidget(game_set_wid);

    ui->stackedWidget->setCurrentIndex(0);

    //  align the keyboard widget
    ui->verticalLayout_14->setAlignment(Qt::AlignCenter);
    ui->verticalLayout_14->addWidget(keyboard_wid);


//    init_game(Home);


}
void MainWindow::init_game(int game_sate)
{
    // show hanged images
    show_image(set_img.set_hangman_image(-1));
    // show hearts
    show_hearst(set_img.set_heart_emoji(true),-1);

    // set paths to dictionary and the result of sorted file
//    dict.set_res_path(path_res) ;
//    dict.set_dic_path(path_dictionary) ;
    // clear tree
    game_set_wid->init_tree();
    /*
    game_set_wid->clear_tree();
    // init the binary tree
    game_set_wid->init_file_management();
    // load tree
    game_set_wid->load_tree();
*/
    // set the word to guess
    word_to_guess=game_set_wid->set_word_to_guess(single_player_mode);

    // set the correct answer
    corret_answ=word_to_guess.length();

    // set num of errors
    num_error_trials=9;

    // set num of trails label

    set_num_trials_label(num_error_trials);


    // chekc if woord exits
    game_set_wid->Find_word(word_to_guess);

    qDebug()<<word_to_guess;

    // clear items table
    itemVector.clear();
    // clear table
    clear_table_frame();
    // creta the table
    create_table(word_to_guess.length());

    // enable the game stiiings widget
    game_set_wid->setEnabled(true );

    // enable keyboard
    keyboard_wid->setEnabled(true);
    keyboard_wid->enable_keyboard(true);

    // set hint text
    ui->hint_text->clear();
    ui->hint_text->setPlainText("Hint text");

    // print the result of th tree
    game_set_wid->disaply_tree();

    if ( game_sate==Home)
    // set current index to be home page
    ui->stackedWidget->setCurrentIndex(0);// home
    else if ( game_sate==replay)
    ui->stackedWidget->setCurrentIndex(1);// play

}

void MainWindow::create_table(int num_cols)
{
    tableWidget = new QTableWidget(1, num_cols);

    // Set the column width to 50 for all columns except the last one
    int columnWidth = 610/ num_cols;
    qDebug()<< columnWidth ;
    // Set the column width for each column
    for (int col = 0; col < num_cols; ++col) {
        tableWidget->setColumnWidth(col, columnWidth);
//        tableWidget->setColumn
    }
    tableWidget->setRowHeight(0,100);
    // Increase font size
    QFont font("Arial", 20);
    // Fill the table with sample data
    for (int col = 0; col < num_cols; ++col) {
        QTableWidgetItem *item= new QTableWidgetItem(QString("*"));
        item->setFont(font);
        item->setTextAlignment(Qt::AlignCenter);
//        item->setTextAlignment(Qt::AlignVCenter
        tableWidget->setItem(0, col, item);
        itemVector.push_back(item);
//        itemVector[col]=item;
    }
    qDebug()<<itemVector.length();

    // Set header hidden (no column and row names)
    tableWidget->horizontalHeader()->setVisible(false);
    tableWidget->verticalHeader()->setVisible(false);
    tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
    tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    tableWidget->verticalHeader()->setStretchLastSection(false);
    tableWidget->horizontalHeader()->setStretchLastSection(false);


    // Disable editing of items
    tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
//    Disable selection
    tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
    ui->verticalLayout_15->addWidget(tableWidget);
    ui->verticalLayout_15->setAlignment(Qt::AlignCenter);
//    ui->verticalLayout_15->setAlignment(Qt::AlignVCenter);

}
void MainWindow::clear_table_frame(){
    if ( ! ui->verticalLayout_15->isEmpty())
         ui->verticalLayout_15->removeWidget(tableWidget);
}

void MainWindow::show_image(QPixmap* pic)
{
    ui->image_label->setPixmap(*pic);
    ui->image_label->setFixedSize(pic->size());

}

void MainWindow::judge(bool correct,int occ)
{
    if (correct )
    {
        score+= occ ;
        set_score_label(score);
        corret_answ -= occ;
        if (corret_answ==0)
        {
            qDebug()<<"you win !! ";
            win_notif->show();
            return ;
        }
    }
    else
    {
        if (num_error_trials>0 )
        {
        num_error_trials -=1;
        set_num_trials_label(num_error_trials);
        show_image(set_img.set_hangman_image(num_error_trials));
        show_hearst(set_img.set_heart_emoji(false),num_error_trials);
        if (num_error_trials ==0 )
        {
            qDebug()<<"you lost !!";
            lost_notif->show();
            keyboard_wid->setEnabled(false);
            calculate_penalty();
            return;
        }
        }
    }


}

void MainWindow::set_score_label(int scr)
{
     QFont font("Arial", 24);
    ui->Score_label->setFont(font);
    ui->Score_label->setText(QString ("Score: %1").arg(scr));
}
void MainWindow::set_num_trials_label(int num)
{
    QFont font("Arial", 24);
    ui->num_heart_left_label->setFont(font);
    ui->num_heart_left_label->setText(QString ("Hearts: %1").arg(num));
}
void MainWindow::show_hearst(QPixmap *pic, int num)
{
    switch (num) {
    case 8:
        ui->heart_label_9->setPixmap(*pic);
        ui->heart_label_9->setFixedSize(pic->size());
        break;
    case 7:
        ui->heart_label_8->setPixmap(*pic);
        ui->heart_label_8->setFixedSize(pic->size());
        break;
    case 6:
        ui->heart_label_7->setPixmap(*pic);
        ui->heart_label_7->setFixedSize(pic->size());
        break;
    case 5:
        ui->heart_label_6->setPixmap(*pic);
        ui->heart_label_6->setFixedSize(pic->size());
        break;
    case 4:
        ui->heart_label_5->setPixmap(*pic);
        ui->heart_label_5->setFixedSize(pic->size());
        break;
    case 3:
        ui->heart_label_4->setPixmap(*pic);
        ui->heart_label_4->setFixedSize(pic->size());
        break;
    case 2:
        ui->heart_label_3->setPixmap(*pic);
        ui->heart_label_3->setFixedSize(pic->size());
        break;
    case 1:
        ui->heart_label_2->setPixmap(*pic);
        ui->heart_label_2->setFixedSize(pic->size());
        break;
    case 0:
        ui->heart_label->setPixmap(*pic);
        ui->heart_label->setFixedSize(pic->size());
        break;
    default:
        ui->heart_label_9->setFixedSize(pic->size());
        ui->heart_label_9->setPixmap(*pic);
        ui->heart_label_8->setPixmap(*pic);
        ui->heart_label_8->setFixedSize(pic->size());
        ui->heart_label_7->setPixmap(*pic);
        ui->heart_label_7->setFixedSize(pic->size());
        ui->heart_label_6->setPixmap(*pic);
        ui->heart_label_6->setFixedSize(pic->size());
        ui->heart_label_5->setPixmap(*pic);
        ui->heart_label_5->setFixedSize(pic->size());
        ui->heart_label_4->setPixmap(*pic);
        ui->heart_label_4->setFixedSize(pic->size());
        ui->heart_label_3->setPixmap(*pic);
        ui->heart_label_3->setFixedSize(pic->size());
        ui->heart_label_2->setPixmap(*pic);
        ui->heart_label_2->setFixedSize(pic->size());
        ui->heart_label->setPixmap(*pic);
        ui->heart_label->setFixedSize(pic->size());

        break;
    }


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
    if ( playing_state==playing)
    {
//        reset_game(Home);
        // do nothing
    }
    else {
        ui->stackedWidget->setCurrentIndex(0);
    }
//
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
playing_state=playing;
init_game(replay);
//ui->stackedWidget->setCurrentIndex(1);// set game single player mode page

}

void MainWindow::RecieveKyeboradInput(QString &message)
{
qDebug()<<message;
int arr[10];
int len=0,index=0;
QChar key_in= message[0];
qDebug()<<key_in;
len = game_set_wid->check_user_input(key_in,word_to_guess,arr);
if (len >0)
{
    for (int i = 0; i<len; i++ )
    {
        index=arr[i];
        qDebug()<<index;
        QTableWidgetItem *item= itemVector.at(index);
//        qDebug()<<"yoo";
        item->setText(message);
        keyboard_wid->disable_key(key_in);
    }
    judge(true,len);
}
else{
    qDebug()<< "wrong letter";
    judge(false);
}

}

void MainWindow::set_playing_state(int state)
{
init_game(state);

//if (state!=replay)
//{
//    ui->stackedWidget->setCurrentIndex(0);// home
//}
}

void MainWindow::update_dict_lang(const QString& update)
{
dict_lang= update;
qDebug()<<dict_lang;
}

void MainWindow::reset_game(){

clear_table_frame();
show_image(set_img.set_hangman_image(-1));
show_hearst(set_img.set_heart_emoji(true),-1);
keyboard_wid->setEnabled(true);
keyboard_wid->enable_keyboard(true);
word_to_guess= "";

corret_answ=word_to_guess.length();
num_error_trials=9;
itemVector.clear();
set_num_trials_label(9);

game_set_wid->setEnabled(true );

ui->hint_text->clear();
ui->hint_text->setPlainText("Hint text");

ui->stackedWidget->setCurrentIndex(0);// home

}
void MainWindow::on_hint_btn_clicked()
{
    QStringList words = api.request_api(word_to_guess, max_hint_words,dict_lang);
    if (!words.isEmpty())
    {
        ui->hint_text->clear();
        for (const QString &hint : words)
        {
            ui->hint_text->appendPlainText("• " + hint);
        }
    }
    else
    {
        ui->hint_text->clear();
        ui->hint_text->setPlainText("No hints available. Good luck!");
    }
}

void MainWindow::calculate_penalty(){

if (penalty>=score)
{
    score = 0;

}
else {
    score -= penalty;
}
set_score_label(score);
}
//void MainWindow::set_word_to_guess(int mode )
//{


//}
//void MainWindow::load_tree()
//{

//}


void MainWindow::on_game_settings_clicked()
{

ui->stackedWidget_2->setCurrentWidget(game_set_wid);
if ( playing_state == playing)
    {
    game_set_wid->setDisabled(true);
    }

ui->stackedWidget_2->show();

}


void MainWindow::on_reset_btn_clicked()
{
reset_game();
playing_state=waiting;
}


void MainWindow::on_back_btn_clicked()
{
if ( playing_state == playing )
{   // go back to play
    ui->stackedWidget->setCurrentIndex(1);
}
else if (playing_state == waiting  )
{
    // Home
ui->stackedWidget->setCurrentIndex(0);
}
}
