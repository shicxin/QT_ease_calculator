#ifndef CHECK_H
#define CHECK_H

#include <QObject>

namespace CalculationFormula {

/*
// 该命名空间包含计算器计算时用到的逻辑判断与输入运算符时的check
// 本计算器包含数字     0 ~ 9
// 本计算器包含符号
//      运算符：'+', '-', '*', '/', '%', '^'
//      符号： '(', ')', '.'
// 包含计算逻辑有      小数、四则运算、混合运算、取余、次方、16位10位8位2位进制转换
//
// 运算规则：
//  1. 运算输入算式时：结尾为运算符时，清除；结尾为小数点时，补零；
//  2. 输入一个运算符时：上一个为运算符，先删除，再插入；上一个为小数点时，补零；
//  3. 输入一个小数点时：上一个为小数点，不操作；上一个为符号，先补零再插入；
//  4. 输入一个右括号时：记录增一，输入左括号时记录减一；
//  5. 取余运算符只对前后两个数做连接，当符号前后非数字而是用括号包含的算式时，计算时再判断是否可以使用，
       否则， 前面的数字有小数点时不能使用、后面的数字不能加小数点；
//  6.
//
*/

class checkoperator : public QObject // 判断符号插入方式
{
private:
    bool decimal_point; // 小数点在当前数字是否被使用
    bool end_symbol;    // 最后一个位置是否为运算符
    bool end_number;    // 最后一个位置是否为数字

    size_t num_unpaired_closing_bracket;
    explicit checkoperator(QObject *parent = nullptr)
        : QObject(parent), decimal_point(false), end_symbol(false), num_unpaired_closing_bracket(0) {}
    Q_OBJECT
public:
    checkoperator& check_is() {static checkoperator A; return A;}                    // 初始化以及调用
    void reverse_decimal_point() {this->decimal_point = !this->decimal_point;}       // 反转是否可以使用小数点
    void reverse_end_symbol() {this->end_symbol = !this->end_symbol;}                // 反转最后一位是否为数字
    void reverse_end_number() {this->end_number = !this->end_number;}                // 反转最后一位是否为运算符

    bool check_decimal_have(){return this->decimal_point;}                          //
    bool check_end_is_symbol(){return this->end_symbol;}
signals:

};

using CkOptor = checkoperator;

}

#endif // CHECK_H
