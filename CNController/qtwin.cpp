#include "qtwin.h"
#include "ui_qtwin.h"

QtWin::QtWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtWin)
{
    ui->setupUi(this);
}

QtWin::~QtWin()
{
    delete ui;
}
