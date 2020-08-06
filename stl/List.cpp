//
// Created by brother_b on 2020-08-03.
//
// 双向链表容器
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(){
/*
 * 容器的创建
 * */
    list<int> values;
    list<int> values1(10);
    list<int> values2(10,5);
    list<int> values3(values1);
    int a[] = { 1,2,3,4,5 };
    list<int> values4(a,a+5);
    vector<int> vector(10,5);
    list<int> values5(vector.begin()+2,vector.end());


/*
 * 元素的访问
 * */
//  访问首尾元素  front() back()
    cout << values2.front() << endl;
    cout << values2.back() << endl;
//  通过迭代器访问其他元素
    auto v2begin = values2.begin();
    auto v2end = values2.end();
    while (v2begin != v2end){
        cout << *v2begin << endl ;
        ++v2begin;
    }

/*
 * 元素的添加和插入
 * */
    values.push_front(0);
    values.push_back(1);
//  emplace 效率更高
    values.emplace_front(-1);
    values.emplace_back(2);
//  在指定位置生成新的元素
    values.emplace(values.end(),3);

//  元素的插入
    values.insert(values.begin(),3);
    values.insert(values.end(),2,4);
    values.insert(values.end(),vector.begin(),vector.end());
    values.insert(values.end(),{1,2,3,4,5});

//  splice()

/*
 * 元素的删除
 * */
    values.pop_front();
    values.pop_back();
    auto del = values.begin();
    ++del;
    values.erase(del);

//  删除所有等于val的元素
    values.remove(2);
//  删除容器中相邻的重复元素
    values.unique();
    auto firstDel = values.begin();
    ++firstDel; // 指向第二个元素
    auto lastDel = values.end();
    --lastDel;  // 指向最后一个元素
    values.erase(firstDel,lastDel);
    values.clear(); // 删除所有元素

}