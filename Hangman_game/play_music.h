#ifndef PLAY_MUSIC_H
#define PLAY_MUSIC_H

#include <QWidget>
#include<QMediaPlayer>
//#include<QMediaPlayl>
#include<QDebug>
#include<QAudioOutput>
namespace Ui {
class play_music;
}

class play_music : public QWidget
{
    Q_OBJECT

public:
    explicit play_music(QWidget *parent = nullptr);
    ~play_music();

private slots:
    void on_Slider_Volume_sliderMoved(int position);



    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
public:
    int get_volume_level();
    void mute_music(bool data);

    //void on_duration_changed(qint64 position );// position of the file
    //void on_posiotion_changed(qint64 position );// full length

private:
    Ui::play_music *ui;
    QMediaPlayer* player;
    QAudioOutput* audio;

};

#endif // PLAY_MUSIC_H
