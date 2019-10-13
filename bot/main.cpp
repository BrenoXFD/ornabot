#include "ornabot.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OrnaBot w;
    w.show();

    return a.exec();
}
