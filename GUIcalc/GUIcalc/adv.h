#ifndef ADV_H
#define ADV_H

#include <QMainWindow>

namespace Ui {
class adv;
}

class adv : public QMainWindow
{
    Q_OBJECT

public:
    explicit adv(QWidget *parent = nullptr);
    ~adv();

private:
    Ui::adv *ui;
};

#endif // ADV_H
