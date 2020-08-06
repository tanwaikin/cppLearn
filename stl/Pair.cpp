//
// Created by brother_b on 2020-08-04.
//
// pair 对象
#include <utility> // pair
#include <iostream>
using namespace std;

int main(){
//  创建空的pair对象
    pair<string,int> pair1;
//  初始化
    pair<string,int> pair2("a",1);
//  拷贝
    pair<string,int> pair3(pair2);
//  移动构造函数
    pair<string,int> pair4(make_pair("b",2));
//  元素的访问
    cout << pair2.first << pair2.second ;
//  两个对象键值对互换
    pair2.swap(pair4);


}
