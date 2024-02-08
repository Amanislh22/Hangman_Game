#ifndef PERDU_H
#define PERDU_H

#include <QDialog>
#include "state.h"
namespace Ui {
class perdu;
}

class perdu : public QDialog
{
    Q_OBJECT

public:
    explicit perdu(QWidget *parent = nullptr);
    ~perdu();
    void restart(void);
    void Close();

signals:
    void send_action(int action);
private:
    Ui::perdu *ui;
};

#endif // PERDU_H
