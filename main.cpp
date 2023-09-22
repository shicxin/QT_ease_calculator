#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("我的QT计算器");
    w.move(1100, 100);
    w.setFixedSize(410, 600);
    w.show();
    return a.exec();
}
