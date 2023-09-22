#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QTextEdit>
#include <QLineEdit>
#include <QGroupBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
    QPushButton button1, button2, button3, button4, button5, button6, button7, button8, button9, button0, button_point;
    QPushButton button_add, buttin_reduce, button_take, button_remove, button_Take_remainder, button_Power, button_return, button_AC, button_copy; //+-*/%^=,ac,copy
    QTextEdit history_calculate;
    QLineEdit now_add_return;
    QGroupBox number_box, symbol_box;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
