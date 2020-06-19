//
// Created by brother_b on 2020/6/15.
//

#include "iostream"

using namespace std;

void pointer_swap(int *x, int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
}

void reference_swap(int &j , int &k){
    int temp=j;
    j=k;
    k=temp;
}
int main() {
    int a=10;
    int b=20;
    cout << a << " " << b <<endl;
    pointer_swap(&a,&b);
    cout << a << " " << b << endl;
    int c=20;
    int d=30;
    cout << c << " " << d <<endl;
    reference_swap(c,d);
    cout << c << " " << d <<endl;
}