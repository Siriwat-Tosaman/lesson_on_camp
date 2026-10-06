#include <iostream>
using namespace std;
//int %x ==> %x จะทำการบันทึกตัวแปรตอนส่งกลับคืน
void func1(int &x) {
    x = x + 10;
    cout << "value of x in func1 : " << x << endl;
}

int main() {
    int num = 5;
    cout << "value brfore func1 : " << num << endl;

    func1(num);
    cout << "value brfore func2 : " << num << endl;
}