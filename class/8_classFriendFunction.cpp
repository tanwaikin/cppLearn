//
// Created by brother_b on 2020/6/28.
//

#include "iostream"

using namespace std;

class Box {
private:
    int W;
public:
    void setW(int w);
//  友元可以访问该类的任何成员 友元函数没有this指针
    friend void printW(Box box);
};

void Box::setW(int w) {
    W = w;
}

void printW(Box box) {
    cout << box.W << endl;
}

int main() {
    Box box;
    box.setW(10);
    printW(box);
}
