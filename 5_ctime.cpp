//
// Created by brother_b on 2020/6/19.
//

#include <iostream>
#include <ctime>

using namespace std;

int main(){
//  获取当前时间戳
    time_t now=time(0);
    cout << now << endl;
//  将时间戳转换成可读事件
    char *dt=ctime(&now);
    cout << dt << endl;
}