//
// Created by brother_b on 2020/6/27.
//
//析构函数
//todo 不懂
#include "iostream"

using namespace std;

class ClassA {
public:
    ClassA();

    ~ClassA();

    void print();
};

ClassA::ClassA() {
    cout << "constructing" << endl;
}

ClassA::~ClassA() { //析构函数 删除对象时执行的函数
    cout << "destructing" << endl;
}

void ClassA::print() {
    cout << "hello" << endl;
}

int main() {
    ClassA a;
    a.print();
}