//
// Created by brother_b on 2020/6/15.
//

#include <iostream>

using namespace std;

int main() {
    int i = 10;
//  �������v���ñ���i
    int &v = i;
    cout << i << " " << v << endl;
    cout << &i << " " << &v << endl;
    return 0;
}

//���ÿ��Կ��������ݵ�һ������
//���ñ����ڶ����ͬʱ��ʼ���������Ժ�ҲҪ��һ���գ�������������������