//
// Created by brother_b on 2020/6/26.
//
#include "iostream"

using namespace std;

// ����һ����
class Box {
// ���г�Ա����
public:
    double x;
    double y;
    double z;
};


int main() {
    Box box1;
    box1.x = 5;
    box1.y = 6;
    box1.z = 5;
    cout << "Box ���Ϊ��" << box1.x*box1.y*box1.z << endl;
}