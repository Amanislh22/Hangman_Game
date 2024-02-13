#ifndef RESET_NOTIFICATION_H
#define RESET_NOTIFICATION_H

#include <QDialog>

namespace Ui {
class reset_notification;
}

class reset_notification : public QDialog
{
    Q_OBJECT

public:
    explicit reset_notification(QWidget *parent = nullptr);
    ~reset_notification();

private:
    Ui::reset_notification *ui;
};

#endif // RESET_NOTIFICATION_H
