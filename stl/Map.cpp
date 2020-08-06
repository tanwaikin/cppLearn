//
// Created by brother_b on 2020-08-04.
//
#include <map>
#include <iostream>


using namespace std;

int main() {
/*
 * 容器的创建
 * */
//  创建空的map容器
    map<string, int> myMap;
//  创建时初始化
    map<string, int> myMap2{{"a", 1},
                            {"b", 2}};
//  拷贝构造
    map<string, int> myMap3(myMap2);
//  移动构造
    map<string, int> myMap4{{make_pair("c", 3)}};

/*
 * 获取键对应值
 * */
    map<string, int> myMap5{{"a", 1},
                            {"b", 2},
                            {"c", 3}};
//  通过数组下标
    cout << myMap5["a"] << endl;
    cout << myMap5["d"] << endl;    // 使用[key]获取该键的对应值 若没有该key 功能就转变为 向容器中添加一个<key,0>键值对

//  at()
    cout << myMap5.at("b") << endl;
//  cout << myMap5.at("e") << endl;     // at()访问不存在key 会抛出异常

//  find()  查找成功返回键值对的迭代器   查找失败返回end() 迭代器
    auto iter = myMap5.find("a");
    cout << iter->first << iter->second << endl;
    auto iter2 = myMap5.find("e");
    cout << "iter2 == end()=" << (iter2 == myMap5.end()) << endl;

//  遍历整个容器
    for (auto iter3 = myMap5.begin(); iter3 != myMap5.end(); ++iter3) {
        if (!iter3->first.compare("c")) {
            cout << iter3->second << endl;
        }
    }

/*
 * 插入数据     即便指定了新键值对的插入位置，map 容器仍会对存储的键值对进行排序
 *  效率:
 *      更新一个已有的map元素,应该选择[]运算符
 *      添加一个新的元素,应该选择insert
 * */
//  数组下标
    myMap5["e"] = 5;

//  insert()
//  普通方式插入一个pair对象
    pair<string, int> pair1("f", 6);
    myMap5.insert(myMap5.end(), pair1); //  myMap5.insert(pair1);
//  右值引用
    myMap5.insert(myMap5.end(), make_pair("g", 7));
    myMap5.insert(myMap5.end(), pair<string, int>("h", 8));
    map<string, int> myMap6{{"i",9},{"j",10},{"k",11}};
//  插入其他容器区域内的所有键值对
    myMap5.insert(myMap6.begin(),myMap6.end());

    cout << (--myMap5.end())->first;
}
