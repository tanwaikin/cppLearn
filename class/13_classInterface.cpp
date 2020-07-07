//
// Created by brother_b on 2020/7/5.
//
// 接口
// 抽象类：含有纯虚函数
#include "iostream"

using namespace std;

// 基类 抽象类
class Sharp {
public:
    virtual int getArea() = 0;    // 纯虚函数 接口
    void setWidth(int width);

    void setHeight(int height);

protected:
    int Width;
    int Height;
};

void Sharp::setWidth(int width) {
    Width = width;
}

void Sharp::setHeight(int height) {
    Height = height;
}

// 派生类
class Rectangle : public Sharp {
public:
    int getArea();
};

int Rectangle::getArea() {
    return Width * Height;
}

class Triangle : public Sharp {
public:
    int getArea();
};

int Triangle::getArea() {
    return (Width * Height) / 2;
}

int main(){
//  抽象类 继承性
    Rectangle rectangle;
    rectangle.setWidth(10);
    rectangle.setHeight(20);
    Triangle triangle;
    triangle.setWidth(5);
    triangle.setHeight(10);
    cout << rectangle.getArea() << endl;
    cout << triangle.getArea() << endl;
//  多态性 基类指针可以指向派生对象
    Sharp *sharp;
    sharp=new Rectangle;
    sharp->setHeight(10);
    sharp->setWidth(5);
    cout << sharp->getArea() << endl;
}