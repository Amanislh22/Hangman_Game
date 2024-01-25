#include "play_music.h"
#include "ui_play_music.h"
play_music::play_music(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::play_music)
{
    ui->setupUi(this);
    player= new QMediaPlayer(this);
    audio = new QAudioOutput(this);
//    audio->setDevice()
    player->setSource(QUrl::fromLocalFile("/home/moktar/Hangman_Game/Hangman_game/music.mp3"));
    player->setAudioOutput(audio);

    audio->setVolume(0.5);
    ui->volume_label->setText(QString("Volume: %1").arg(this->get_volume_level()));
    ui->Slider_Volume->setSliderPosition(this->get_volume_level());
    player->setLoops(QMediaPlayer::Infinite);
    player->play();

//    connect(player,&QMediaPlayer::positionChanged,this,&play_music::on_posiotion_changed );
//    connect(player,&QMediaPlayer::durationChanged,this,&play_music::on_duration_changed );

}

play_music::~play_music()
{
    delete ui;
}

void play_music::on_Slider_Volume_sliderMoved(int position)
{

    qDebug()<<position;
    float vol =(float ) position / 100 ;
    audio->setVolume(vol);

    ui->volume_label->setText(QString("Volume: %1").arg((int)(vol*100)));

}


//void play_music::on_Slider_progress_sliderMoved(int position)
//{
//   player->setPosition(position);
//}


void play_music::on_pushButton_clicked()
{
// load the file and played
    player->play();
    audio->setVolume(1);
    player->setLoops(QMediaPlayer::Infinite);

    qDebug()<<player->errorString();
}


void play_music::on_pushButton_2_clicked()
{
    player->pause();

}

int play_music::get_volume_level()
{
    return (int) (100* audio->volume());
}

void play_music::mute_music(bool data)
{
    audio->setMuted(data);
}

//void play_music::on_duration_changed(qint64 position)
//{
//    ui->Slider_progress->setMaximum(position);

//}

//void play_music::on_posiotion_changed(qint64 position)
//{
//    ui->Slider_progress->setValue(position);
//}

