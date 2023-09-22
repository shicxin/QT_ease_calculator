#include "widget.h"
#include "ui_widget.h"
#include <qfont>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    QFont font;
    font.setPixelSize(25);

    history_calculate.setParent(this);
    history_calculate.move(15, 10);
    history_calculate.resize(380, 170);
    history_calculate.setReadOnly(true);
    now_add_return.setParent(this);
    now_add_return.move(15, 200);
    now_add_return.resize(380, 50);
    now_add_return.setFont(font);
    now_add_return.setMaxLength(30);
    now_add_return.setReadOnly(true);


    number_box.setParent(this);
    number_box.move(15, 270);
    number_box.resize(260, 310);
    symbol_box.setParent(this);
    symbol_box.move(285, 270);
    symbol_box.resize(100, 310);


    button0.setText("0");
    button1.setText("1");
    button2.setText("2");
    button3.setText("3");
    button4.setText("4");
    button5.setText("5");
    button6.setText("6");
    button7.setText("7");
    button8.setText("8");
    button9.setText("9");
    button_point.setText(".");

    button1.move(5, 5);
    button1.resize(80, 80);
    button2.move(90, 5);
    button2.resize(80, 80);
    button3.move(175, 5);
    button3.resize(80, 80);
    button4.move(5, 90);
    button4.resize(80, 80);
    button5.move(90, 90);
    button5.resize(80, 80);
    button6.move(175, 90);
    button6.resize(80, 80);
    button7.move(5, 175);
    button7.resize(80, 80);
    button8.move(90, 175);
    button8.resize(80, 80);
    button9.move(175, 175);
    button9.resize(80, 80);
    button0.move(5, 260);
    button0.resize(165, 40);
    button_point.move(175, 260);
    button_point.resize(80, 40);

    button0.setParent(&number_box);
    button1.setParent(&number_box);
    button2.setParent(&number_box);
    button3.setParent(&number_box);
    button4.setParent(&number_box);
    button5.setParent(&number_box);
    button6.setParent(&number_box);
    button7.setParent(&number_box);
    button8.setParent(&number_box);
    button9.setParent(&number_box);
    button_point.setParent(&number_box);


    button_add.setText("+");
    buttin_reduce.setText("-");
    button_take.setText("*");
    button_remove.setText("/");
    button_Take_remainder.setText("%");
    button_Power.setText("^");
    button_copy.setText("copy");
    button_AC.setText("AC");
    button_return.setText("=");


    button_add.move(5, 5);
    buttin_reduce.move(5, 40);
    button_take.move(5, 75);
    button_remove.move(5, 110);
    button_Take_remainder.move(5, 145);
    button_Power.move(5, 180);
    button_add.resize(90, 30);
    buttin_reduce.resize(90, 30);
    button_take.resize(90, 30);
    button_remove.resize(90, 30);
    button_Take_remainder.resize(90, 30);
    button_Power.resize(90, 30);

    button_AC.move(5, 215);
    button_AC.resize(40, 40);
    button_copy.move(50, 215);
    button_copy.resize(40, 40);
    button_return.move(5, 260);
    button_return.resize(90, 40);

    button_add.setParent(&symbol_box);
    buttin_reduce.setParent(&symbol_box);
    button_take.setParent(&symbol_box);
    button_remove.setParent(&symbol_box);
    button_Take_remainder.setParent(&symbol_box);
    button_Power.setParent(&symbol_box);
    button_copy.setParent(&symbol_box);
    button_AC.setParent(&symbol_box);
    button_return.setParent(&symbol_box);

//    button_

//    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

