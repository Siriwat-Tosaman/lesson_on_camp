#include <iostream>
using namespace std;

#define MAX 950
//what this.
int balance = 1000;
//global variable, every function can use
//global variable คือตัวแปรที่ประกาศนอก function ซึ่งทุก function สามารถเรียกใช้ได้

int main() {
    cout << balance << endl;
    //int balance = 1000;
    //local variable เรียกใช้ได้แค่ใน function
    //local variable คือตัวแปรที่ประกาศใน function
}

void deposit(int amount) {
    balance += amount;
}

void withdraw(int amount) {
    balance += amount;
}