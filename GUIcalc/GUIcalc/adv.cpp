#include "adv.h"
#include "ui_adv.h"

adv::adv(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::adv)
{
    ui->setupUi(this);
}

adv::~adv()
{
    delete ui;
}
