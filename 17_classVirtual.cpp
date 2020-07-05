//
// Created by brother_b on 2020/7/3.
//
// 多态和虚函数
// 使用虚函数：用基类的指针指向不同的派生类的对象时，基类指针调用虚成员函数，则会调用真正指向对象的成员函数，而不是基类中定义的成员函数
// 不使用虚函数：不管基类指针指向哪个派生类对象，调用成员函数都会调用基类中定义的那个函数
#include "iostream"

using namespace std;

// 基类
class People {
public:
    People(char *name, int age);
    void display(); // 没有使用虚函数
    virtual void virtualDisplay(); // 虚函数
protected:
    char *Name;
    int Age;
};

People::People(char *name, int age) {
    Name = name;
    Age = age;
}
void People::display() {
    cout << Name << "是个无业游民,今年" << Age << "岁" << endl;
}

void People::virtualDisplay() {
    cout << Name << "是个无业游民,今年" << Age << "岁" << endl;
}



// 派生类
class Teacher : public People {
public:
    Teacher(char *name, int age, int salary);
    void display();
    void virtualDisplay();

protected:
    int Salary;
};

Teacher::Teacher(char *name, int age, int salary) : People(name, age), Salary(salary) {}

void Teacher::virtualDisplay() {
    cout << Name << "是个教师,今年" << Age << "岁,工资" << Salary << "元" << endl;
}

void Teacher::display() {
    cout << Name << "是个教师,今年" << Age << "岁,工资" << Salary << "元" << endl;
}


int main() {
    People *person;
    cout << "不使用虚函数:" << endl;
    person = new People("王刚", 30);
    person->display();
    person = new Teacher("阿丽", 28, 8000);
    person->display();
    cout << "使用虚函数:" << endl;
    person = new People("王刚", 30);
    person->virtualDisplay();
    person = new Teacher("阿丽", 28, 8000);
    person->virtualDisplay();
}