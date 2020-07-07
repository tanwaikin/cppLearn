//
// Created by brother_b on 2020/6/29.
//
// 静态成员
// 无论创建多少个类的对象，静态成员都只有一个副本
// 所有类的对象共享静态成员
// 不需要生成一个对象就可以直接使用静态成员变量或者静态成员函数

#include "iostream"

using namespace std;

class Box {
public:
    Box(int x, int y, int z);

    static int boxCount;    //  静态成员变量定义
private:
    int X, Y, Z;
};

int Box::boxCount = 0;  // 静态成员变量需要在类外部初始化

Box::Box(int x, int y, int z) {
    X = x;
    Y = y;
    Z = z;
    boxCount++;
};

class Circle {
public:
    Circle(int r);

    static int circleCount;

    static int getCircleCount();

private:
    int R;
};

int Circle::circleCount = 0;

Circle::Circle(int r) {
    R = r;
    circleCount++;
}

int Circle::getCircleCount() {
    return circleCount;
}


int main() {
    cout << "boxCount=" << Box::boxCount << endl;
    Box box1(1, 2, 3);
    Box box2(2, 3, 4);
    cout << "boxCount=" << Box::boxCount << endl;
    cout << "circleCount=" << Circle::getCircleCount() << endl;
    Circle circle1(1);
    Circle circle2(2);
    cout << "circleCount=" << Circle::getCircleCount() << endl;
}