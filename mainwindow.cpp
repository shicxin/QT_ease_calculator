#include <QQueue>
#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newlineedit.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    NewlineEdit *mylineedit = new NewlineEdit;
    mylineedit -> setParent(this);
    mylineedit -> resize(360, 40);
    mylineedit -> move(20, 145);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_1_clicked()
{
    ui->lineEdit->insert("1"); //在光标位置插入字符串"1"
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->insert("2");
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit->insert("3");
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit->insert("4");
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->insert("5");
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit->insert("6");
}


void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEdit->insert("7");
}


void MainWindow::on_pushButton_8_clicked()
{
    ui->lineEdit->insert("8");
}


void MainWindow::on_pushButton_9_clicked()
{
    ui->lineEdit->insert("9");
}


void MainWindow::on_pushButton_0_clicked()
{
    QString str = ui -> lineEdit -> text();
    if(str.size())
    ui->lineEdit->insert("0");

}


void MainWindow::on_pushButton_over_clicked()
{
    static bool flage = 0;
    QString str = ui->lineEdit->text();
    if(!flage)
    {
        if(str.isNull() == 0)
            ui->lineEdit->insert("0.");
        else ui->lineEdit->insert(".");
        flage = 1;
    }
}


void MainWindow::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
//    QString str = ui->lineEdit->text(); //获取文本框中的内容
//    double num = str.toDouble(); //将字符串转换为整数
//    num += 1; //增加数字1
//    ui->lineEdit->setText(QString::number(num)); //将整数转换为字符串，并设置为文本框中的内容
}


void MainWindow::on_pushButton_add_clicked()
{
    ui->lineEdit->insert("+");
}


void MainWindow::on_pushButton_reduce_clicked()
{
    ui->lineEdit->insert("-");
}


void MainWindow::on_pushButton_mul_clicked()
{
    ui->lineEdit->insert("*");
}


void MainWindow::on_pushButton_div_clicked()
{
    ui->lineEdit->insert("/");
}


bool OperatorCheck(QChar c)
{
    bool flag = 0;
    if(c == '+') { flag = 1; }
    if(c == '-') { flag = 1; }
    if(c == '*') { flag = 1; }
    if(c == '/') { flag = 1; }

    return flag;
}

void calculate(QChar c, double& sum, double a)
{
    if(c == '+') { sum += a; }
    if(c == '-') { sum -= a; }
    if(c == '*') { sum *= a; }
    if(c == '/') { sum /= a; }
}

using namespace std;

void MainWindow::on_pushButton_return_clicked()
{
    QString str = ui -> lineEdit -> text();
    QQueue<double> num;
    QQueue<QChar> symbol;
    double x = 0;
    int i = 0;
    while(i < str.size())
    {
        if (str[i].isNumber())
        {
            x *= 10;
            x += (str[i].toLatin1() - '0');
        }
        else if (OperatorCheck(str[i]))
        {
            num.push_back(x);
            x = 0;
            symbol.push_front(str[i]);
        }
        i++;
    }
    num.push_back(x);
    double sum = num.first();
    num.pop_front();
    while(!symbol.empty())
    {
        QChar x1 = symbol.first();
        symbol.pop_front();
        double a = num.front();
        num.pop_front();
        calculate(x1, sum, a);
    }
    ui -> textEdit -> append(str);
    ui -> lineEdit -> setText(QString::number(sum));
}


void MainWindow::on_pushButton_AC_clicked()
{

    ui -> lineEdit -> setText("");
}


void MainWindow::on_pushButton_ACH_clicked()
{
    ui -> textEdit -> setText("");
}


void MainWindow::on_pushButton_Back_clicked()
{
    QString str = ui -> lineEdit -> text();
    str.chop(1);
    ui -> lineEdit -> setText(str);
}


void MainWindow::on_pushButton_double_clicked()
{

}


void MainWindow::on_pushButton_rem_clicked()
{

}


void MainWindow::on_pushButton_r_pare_clicked()
{
    ui -> lineEdit -> insert("(");
    QString str = ui -> lineEdit -> text();
    if(str[str.size() - 1] == '(')
    {
        ui -> lineEdit -> insert(")");
        ui -> lineEdit -> cursorForward(false, 1);
    }
}


void MainWindow::on_pushButton_l_pare_clicked()
{
    ui -> lineEdit -> insert(")");
}

