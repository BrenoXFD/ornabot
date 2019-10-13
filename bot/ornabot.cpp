#include "ornabot.h"
#include "ui_ornabot.h"

OrnaBot::OrnaBot(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OrnaBot)
{
    ui->setupUi(this);
}

OrnaBot::~OrnaBot()
{
    delete ui;
}
