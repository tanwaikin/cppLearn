//
// Created by brother_b on 2020/6/14.
//

#include "iostream"

using namespace std;

int main() {
//    定义一个int型变量
    int var = 20;
    cout << "变量的值 " << var << endl;
    cout << "变量的地址 " << &var << endl;
    cout << "" << endl;

//    定义一个指针变量指向var
    int *p_var = &var;
//    指针变量的值
    cout << "指针变量的值 p_var " << p_var << endl;
//    指针的地址
    cout << "指针变量的地址  &p_var " << &p_var << endl;
//    通过指针变量获取数据
    cout << "通过指针变量获取数据 *p_var " << *p_var << endl;

    return 0;

}