#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <QDialog>

namespace Ui {
class notification;
}

class notification : public QDialog
{
    Q_OBJECT

public:
    explicit notification(QWidget *parent = nullptr);
    ~notification();
     void replay(void);

private:
    Ui::notification *ui;



};

#endif // NOTIFICATION_H
