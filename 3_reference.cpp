//
// Created by brother_b on 2020/6/15.
//

#include <iostream>

using namespace std;

int main() {
    int i = 10;
//  定义变量v引用变量i
    int &v = i;
    cout << i << " " << v << endl;
    cout << &i << " " << &v << endl;
    return 0;
}

//引用可以看做是数据的一个别名
//引用必须在定义的同时初始化，并且以后也要从一而终，不能再引用其它数据