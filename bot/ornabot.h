#ifndef ORNABOT_H
#define ORNABOT_H

#include <QMainWindow>

namespace Ui {
class OrnaBot;
}

class OrnaBot : public QMainWindow
{
    Q_OBJECT

public:
    explicit OrnaBot(QWidget *parent = 0);
    ~OrnaBot();

private:
    Ui::OrnaBot *ui;
};

#endif // ORNABOT_H
