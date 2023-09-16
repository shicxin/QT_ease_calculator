#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_over_clicked();

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_add_clicked();

    void on_pushButton_reduce_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_return_clicked();

    void on_pushButton_AC_clicked();

    void on_pushButton_ACH_clicked();

    void on_pushButton_Back_clicked();

    void on_pushButton_double_clicked();

    void on_pushButton_rem_clicked();

    void on_pushButton_r_pare_clicked();

    void on_pushButton_l_pare_clicked();

private:
    Ui::MainWindow *ui;
};
class OPerator
{
public:
    bool OperatorCheck(QChar c);
};
#endif // MAINWINDOW_H
