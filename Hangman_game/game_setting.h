#ifndef GAME_SETTING_H
#define GAME_SETTING_H

#include <QWidget>

namespace Ui {
class game_setting;
}

class game_setting : public QWidget
{
    Q_OBJECT

public:
    explicit game_setting(QWidget *parent = nullptr);
    ~game_setting();

private:
    Ui::game_setting *ui;
};

#endif // GAME_SETTING_H
