#ifndef SINGLE_PLAYER_H
#define SINGLE_PLAYER_H

#include <QWidget>

namespace Ui {
class single_player;
}

class single_player : public QWidget
{
    Q_OBJECT

public:
    explicit single_player(QWidget *parent = nullptr);
    ~single_player();

private:
    Ui::single_player *ui;
};

#endif // SINGLE_PLAYER_H
