//
// Created by brother_b on 2020/8/2.
//
// 双端队列容器

/*
 * deque 容器中存储元素并不能保证所有元素都存储到连续的内存空间中
 * 当需要向序列两端频繁的添加或删除元素时，应首选 deque 容器
 * */

#include <deque>
#include <iostream>

using namespace std;

int main(){
/*
 * 容器的创建
 * */
//  创建空的容器
    deque<int> queue;
//  创建有n个元素的容器
    deque<int> queue2(10);
//  创建有n个元素 有默认值的容器
    deque<int> queue3(10,5);
//  拷贝容器
    deque<int> queue4(queue3);
//  拷贝指定区域内的元素
    int a[] = { 1,2,3,4,5 };
    deque<int> queue5(a,a+5);
    deque<int> queue6(queue3.begin(),queue3.begin()+4);



}
