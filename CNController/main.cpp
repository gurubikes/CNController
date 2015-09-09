#include "qtwin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWin w;
    w.show();

    return a.exec();
}
