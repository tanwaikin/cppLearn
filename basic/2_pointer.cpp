//
// Created by brother_b on 2020/6/14.
//

#include "iostream"

using namespace std;

int main() {
//    ����һ��int�ͱ���
    int var = 20;
    cout << "������ֵ " << var << endl;
    cout << "�����ĵ�ַ " << &var << endl;
    cout << "" << endl;

//    ����һ��ָ�����ָ��var
    int *p_var = &var;
//    ָ�������ֵ
    cout << "ָ�������ֵ p_var " << p_var << endl;
//    ָ��ĵ�ַ
    cout << "ָ������ĵ�ַ  &p_var " << &p_var << endl;
//    ͨ��ָ�������ȡ����
    cout << "ͨ��ָ�������ȡ���� *p_var " << *p_var << endl;

    return 0;

}