//
// Created by brother_b on 2020/7/5.
//
#include "iostream"
#include <ctime>
#include<windows.h>
#include <thread>

using namespace std;

static bool runSignal=true;


void printTimeStamp(){
    time_t now=time(0);
    while (runSignal){
        cout << now << endl;
        now++;
        Sleep(1000);
    }
}

void stop(){
    Sleep(2000);
    runSignal=false;
}


int main(){

    thread thread1(printTimeStamp);
    thread thread2(stop);
    thread1.join();
    thread2.join();


}