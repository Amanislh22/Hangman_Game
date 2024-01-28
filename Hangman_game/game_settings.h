#ifndef GAME_SETTINGS_H
#define GAME_SETTINGS_H

#include <QWidget>

namespace Ui {
class Game_settings;
}

class Game_settings : public QWidget
{
    Q_OBJECT

public:
    explicit Game_settings(QWidget *parent = nullptr);
    ~Game_settings();

private slots:
    void on_pushButton_clicked();

    void on_Game_settings_customContextMenuRequested(const QPoint &pos);

private:
    Ui::Game_settings *ui;
};

#endif // GAME_SETTINGS_H
