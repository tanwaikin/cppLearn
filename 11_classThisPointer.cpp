//
// Created by brother_b on 2020/6/27.
//

#include "iostream"

using namespace std;

class Box {
public:
    Box(int l, int w, int h);

    int getVolume();

    int compare(Box box);

private:
    int L, W, H;
};

Box::Box(int l, int w, int h) {
    L = l;
    W = w;
    H = h;
}

int Box::getVolume() {
    return L * W * H;
}

int Box::compare(Box box) {
//  使用this指针调用成员函数
    return this->getVolume() > box.getVolume();
}

int main() {
    Box box1(1, 2, 3);
    Box box2(2, 3, 4);
    cout << box1.compare(box2) << endl;
}