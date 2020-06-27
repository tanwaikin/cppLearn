//
// Created by brother_b on 2020/6/27.
//
#include "iostream"

using namespace std;

class Circle {
public:
    double R;

    void setR(double r);

    double getS();
};

void Circle::setR(double r) {
    R = r;
}

double Circle::getS() {
    return 3.14 * R * R;
}

//Cylinder 继承 Circle
class Cylinder : public Circle {
public:
    double H;

    void setH(double h);

    double getV();
};

void Cylinder::setH(double h) {
    H = h;
}

double Cylinder::getV() {
    return 3.14 * R * R * H;
}

int main() {
    Cylinder cylinder;
    cylinder.setR(10);
    cylinder.setH(2);
    cout << cylinder.getS() << endl;
    cout << cylinder.getV() << endl;
}