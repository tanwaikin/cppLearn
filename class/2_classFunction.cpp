//
// Created by brother_b on 2020/6/26.
//

#include "iostream"

using namespace std;

class Box {
public:
    double x;
    double y;
    double z;

//  类内部定义成员函数
    double getVolume() {
        return x * y * z;
    }
};

class Cylinder {
public:
    double r;
    double h;

//  成员函数 声明
    double getVolume(void);
};

// 类外部定义成员函数
// 使用了范围解析运算符 ::
double Cylinder::getVolume(void) {
    return 3.14 * r * r * h;
}

int main() {
    Box box1;
    box1.x = 5;
    box1.y = 6;
    box1.z = 5;
    cout << box1.getVolume() << endl;
    Cylinder cylinder1;
    cylinder1.r = 5;
    cylinder1.h = 4;
    cout << cylinder1.getVolume() << endl;
}