#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("我的QT计算器");
    w.move(550, 150);
    w.resize(400, 500);
    w.show();
    return a.exec();
}
