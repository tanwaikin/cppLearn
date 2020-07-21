//
// Created by brother_b on 2020/7/9.
//
// 文件和流

#include <fstream>
#include "iostream"
using namespace std;

int main(){
    char data[100];
    ofstream outfile;
    outfile.open("file.dat");
    cout << "waiting to the file" << endl;
    cout << "enter you name" ;
    cin.getline(data,100);


    outfile << data << endl;

    cout << "enter you age";

    cin >> data;
    cin.ignore();
    outfile << data << endl;
    outfile.close();

    ifstream infile;
    infile.open("file.dat");
    infile >> data;
    cout << data << endl;
    infile >> data;
    cout << data << endl;
    infile.close();
}