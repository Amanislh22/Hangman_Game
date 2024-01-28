#ifndef PERDU_H
#define PERDU_H

#include <QDialog>

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
private:
    Ui::perdu *ui;
};

#endif // PERDU_H
