#ifndef QTWIN_H
#define QTWIN_H

#include <QMainWindow>

namespace Ui {
class QtWin;
}

class QtWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtWin(QWidget *parent = 0);
    ~QtWin();

private:
    Ui::QtWin *ui;
};

#endif // QTWIN_H
