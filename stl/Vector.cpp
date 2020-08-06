//
// Created by brother_b on 2020/8/1.
//
// 向量容器

#include <vector>
#include <iostream>

using namespace std;

int main() {
/*
 * 容器的创建
 * */
//  创建一个空的容器
    vector<int> values;
//  增加容器容量
    values.reserve(20);
//  创建指定容量的容器
    vector<int> values2;
//  创建有默认值的指定容量的容器
    vector<int> values3(10, 5); // 容量 10 默认值 5
//  创建一个容器复制另一个类型相同容器的所有元素
    vector<int> values4(values3);
//  用一对指针或者迭代器指定初始值范围
    int array[] = {1, 2, 3};
    vector<int> values5(array, array + 2); // 复制 {1,2}
    vector<int> values6(values3.begin(), values3.begin() + 3); // 复制前三个元素


/*
 * 元素的访问
 * */

//  通过数组下标方式    存在越界访问
    cout << values3[4] << endl;
//  at()
    cout << values3.at(4) << endl;
//  通过迭代器
    auto v3begin = values3.begin();
    auto  v3end = values3.end();
    while (v3begin != v3end){
        cout << *v3begin << endl;
        ++v3begin;
    }



/*
 * 常用成员函数
 * */

//    vector<int>::iterator i;

//  begin() 返回第一个元素的迭代器 ends() 同理
    auto begin = values3.begin();
    cout << *begin << endl;
    auto end = values3.end();
    cout << *(end - 1) << endl;


//  size() 返回实际元素个数
    cout << "实际个数: " << values3.size() << endl;


//  resize() 改变实际元素个数   如果小于当前大小 则删除多出来的元素  大于当前容量 则增加容量
    values3.resize(4);


//  capacity() 返回当前容量
    cout << "当前容量: " << values3.capacity() << endl;


//  empty() 返回是否无元素
    cout << "是否为空: " << values3.empty() << endl;


//  reserve() 增加容器容量    容量改变为新的大小 如果新的容量小于当前容量 容量大小无变化
//  提前分配足够容量 能避免容器扩容 容器扩容将耗费时间
    values3.reserve(20);


//  front() 返回第一个元素的引用
    cout << "第一个元素: " << values3.front() << endl;
//  back() 返回最后一个元素的引用
    cout << "最后一个元素: " << values3.back() << endl;



/*
 * 添加元素
 * */
//  push_back() 或 emplace_back()    emplace_back() 效率更高
    values.push_back(1);
    values.emplace_back(2);

/*
 * 插入元素
 * */

//  insert() 在指定位置之前插入新元素    返回新插入元素的迭代器
    values.insert(values.begin() + 1, 2);  // 在第二个位置插入一个新元素
    values.insert(values.begin(), 3, 10); // 在第一个位置插入三个元素

//  emplace() 在指定位置之前插入一个新元素    emplace() 比 insert() 效率更高
    values.emplace(values.begin(), 20);

/*
 * 删除元素
 * */
//
//  pop_back() 删除容器最后一个元素 容器大小减1 容量不变
    values.pop_back();
//  erase() 删除迭代器指定位置的元素 返回下一个元素迭代器 容器大小减1 容量不变
    auto iter = values.erase(values.begin());

//  remove() 删除容器中所有和指定元素值相等的元素 返回指向最后一个元素下一个位置的迭代器 大小容量不会改变
    iter = remove(values.begin(), values.end(), 10); // 删除容器中值为 10 的元素

//  clear() 删除容器中的所有元素 大小变为 0 容量不变
    values.clear();
}