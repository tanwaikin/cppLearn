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

//  ���ڲ������Ա����
    double getVolume() {
        return x * y * z;
    }
};

class Cylinder {
public:
    double r;
    double h;

//  ��Ա���� ����
    double getVolume(void);
};

// ���ⲿ�����Ա����
// ʹ���˷�Χ��������� ::
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