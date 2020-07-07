//
// Created by brother_b on 2020/6/27.
//
//构造函数
#include "iostream"

using namespace std;

class Circle {
public:
//  构造函数声明 构造函数名与类名相同
    Circle(double r);

    double R;

    double getS();
};

//构造函数定义
Circle::Circle(double r) {
    R = r;
}

double Circle::getS() {
    return 3.14 * R * R;
}

int main() {
    Circle circle(10);
    cout << circle.getS() << endl;
}