//
// Created by brother_b on 2020/6/29.
//
// ���غ���

#include "iostream"
using namespace std;

class PrintData{
public:
    void print(int i) {
        cout << "����Ϊ: " << i << endl;
    }

    void print(double  f) {
        cout << "������Ϊ: " << f << endl;
    }

    void print(char c[]) {
        cout << "�ַ���Ϊ: " << c << endl;
    }
};

int main(){
    PrintData pd;

    // �������
    pd.print(5);
    // ���������
    pd.print(500.263);
    // ����ַ���
    char c[] = "Hello C++";
    pd.print(c);

    return 0;
}