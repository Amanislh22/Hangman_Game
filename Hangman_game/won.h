#ifndef WON_H
#define WON_H
#include "state.h"
#include <QDialog>

namespace Ui {
class Won;
}

class Won : public QDialog
{
    Q_OBJECT

public:
    explicit Won(QWidget *parent = nullptr);
    ~Won();
     void restart(void);
    void Close();
 signals:
        void send_action(int action);

private:
    Ui::Won *ui;



};

#endif // WON_H
