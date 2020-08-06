//
// Created by brother_b on 2020/8/1.
//
// ��������

#include <vector>
#include <iostream>

using namespace std;

int main() {
/*
 * �����Ĵ���
 * */
//  ����һ���յ�����
    vector<int> values;
//  ������������
    values.reserve(20);
//  ����ָ������������
    vector<int> values2;
//  ������Ĭ��ֵ��ָ������������
    vector<int> values3(10, 5); // ���� 10 Ĭ��ֵ 5
//  ����һ������������һ��������ͬ����������Ԫ��
    vector<int> values4(values3);
//  ��һ��ָ����ߵ�����ָ����ʼֵ��Χ
    int array[] = {1, 2, 3};
    vector<int> values5(array, array + 2); // ���� {1,2}
    vector<int> values6(values3.begin(), values3.begin() + 3); // ����ǰ����Ԫ��


/*
 * Ԫ�صķ���
 * */

//  ͨ�������±귽ʽ    ����Խ�����
    cout << values3[4] << endl;
//  at()
    cout << values3.at(4) << endl;
//  ͨ��������
    auto v3begin = values3.begin();
    auto  v3end = values3.end();
    while (v3begin != v3end){
        cout << *v3begin << endl;
        ++v3begin;
    }



/*
 * ���ó�Ա����
 * */

//    vector<int>::iterator i;

//  begin() ���ص�һ��Ԫ�صĵ����� ends() ͬ��
    auto begin = values3.begin();
    cout << *begin << endl;
    auto end = values3.end();
    cout << *(end - 1) << endl;


//  size() ����ʵ��Ԫ�ظ���
    cout << "ʵ�ʸ���: " << values3.size() << endl;


//  resize() �ı�ʵ��Ԫ�ظ���   ���С�ڵ�ǰ��С ��ɾ���������Ԫ��  ���ڵ�ǰ���� ����������
    values3.resize(4);


//  capacity() ���ص�ǰ����
    cout << "��ǰ����: " << values3.capacity() << endl;


//  empty() �����Ƿ���Ԫ��
    cout << "�Ƿ�Ϊ��: " << values3.empty() << endl;


//  reserve() ������������    �����ı�Ϊ�µĴ�С ����µ�����С�ڵ�ǰ���� ������С�ޱ仯
//  ��ǰ�����㹻���� �ܱ����������� �������ݽ��ķ�ʱ��
    values3.reserve(20);


//  front() ���ص�һ��Ԫ�ص�����
    cout << "��һ��Ԫ��: " << values3.front() << endl;
//  back() �������һ��Ԫ�ص�����
    cout << "���һ��Ԫ��: " << values3.back() << endl;



/*
 * ���Ԫ��
 * */
//  push_back() �� emplace_back()    emplace_back() Ч�ʸ���
    values.push_back(1);
    values.emplace_back(2);

/*
 * ����Ԫ��
 * */

//  insert() ��ָ��λ��֮ǰ������Ԫ��    �����²���Ԫ�صĵ�����
    values.insert(values.begin() + 1, 2);  // �ڵڶ���λ�ò���һ����Ԫ��
    values.insert(values.begin(), 3, 10); // �ڵ�һ��λ�ò�������Ԫ��

//  emplace() ��ָ��λ��֮ǰ����һ����Ԫ��    emplace() �� insert() Ч�ʸ���
    values.emplace(values.begin(), 20);

/*
 * ɾ��Ԫ��
 * */
//
//  pop_back() ɾ���������һ��Ԫ�� ������С��1 ��������
    values.pop_back();
//  erase() ɾ��������ָ��λ�õ�Ԫ�� ������һ��Ԫ�ص����� ������С��1 ��������
    auto iter = values.erase(values.begin());

//  remove() ɾ�����������к�ָ��Ԫ��ֵ��ȵ�Ԫ�� ����ָ�����һ��Ԫ����һ��λ�õĵ����� ��С��������ı�
    iter = remove(values.begin(), values.end(), 10); // ɾ��������ֵΪ 10 ��Ԫ��

//  clear() ɾ�������е�����Ԫ�� ��С��Ϊ 0 ��������
    values.clear();
}