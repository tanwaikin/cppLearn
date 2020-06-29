//
// Created by brother_b on 2020/6/27.
//
// 创建对象有两种方法
// 1 通过 new 创建类对象
// 使用new创建的对象 用delete删除对象时调用析构函数
// 2 直接使用类定义声明
// 类定义声明不需要手动删除对象 使用完析构函数会自动执行

//析构函数
#include "iostream"

using namespace std;

class ClassA {
public:
    ClassA(int n);

    ~ClassA();

    void print();
    int N;
};

ClassA::ClassA(int n) {
    N=n;
    cout << "constructing" << N << endl;
}

ClassA::~ClassA() { //析构函数 删除对象时执行的函数
    cout << "destructing" << N <<endl;
}

void ClassA::print() {
    cout << "hello" << endl;
}

int main() {
    ClassA a(1);// 类定义声明创建类对象
    a.print();
    ClassA *b = new ClassA(2);// new创建类对象
    b->print();
    delete b;// 需要手动删除对象 否则会导致内存泄露 删除对象时候会执行析构函数
//  程序结束后类定义声明创建的对象不需要手动删除对象 析构函数会自动执行
}