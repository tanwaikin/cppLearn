//
// Created by brother_b on 2020/7/3.
//
// ��̬���麯��
// ʹ���麯�����û����ָ��ָ��ͬ��������Ķ���ʱ������ָ��������Ա����������������ָ�����ĳ�Ա�����������ǻ����ж���ĳ�Ա����
// ��ʹ���麯�������ܻ���ָ��ָ���ĸ���������󣬵��ó�Ա����������û����ж�����Ǹ�����
#include "iostream"

using namespace std;

// ����
class People {
public:
    People(char *name, int age);
    void display(); // û��ʹ���麯��
    virtual void virtualDisplay(); // �麯��
protected:
    char *Name;
    int Age;
};

People::People(char *name, int age) {
    Name = name;
    Age = age;
}
void People::display() {
    cout << Name << "�Ǹ���ҵ����,����" << Age << "��" << endl;
}

void People::virtualDisplay() {
    cout << Name << "�Ǹ���ҵ����,����" << Age << "��" << endl;
}



// ������
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
    cout << Name << "�Ǹ���ʦ,����" << Age << "��,����" << Salary << "Ԫ" << endl;
}

void Teacher::display() {
    cout << Name << "�Ǹ���ʦ,����" << Age << "��,����" << Salary << "Ԫ" << endl;
}


int main() {
    People *person;
    cout << "��ʹ���麯��:" << endl;
    person = new People("����", 30);
    person->display();
    person = new Teacher("����", 28, 8000);
    person->display();
    cout << "ʹ���麯��:" << endl;
    person = new People("����", 30);
    person->virtualDisplay();
    person = new Teacher("����", 28, 8000);
    person->virtualDisplay();
}