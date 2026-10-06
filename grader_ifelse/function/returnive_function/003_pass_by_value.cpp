#include <iostream>
using namespace std;

//int x ==> เข้ามาเท่าไหร่หากไม่ return ตัวแปรเดิมกลับจะไม่บัยทึกค่า คือค่าจะเท่าเดิม
void func1(int x) {
    x = x + 10;
    cout << "value of x in func1 : " << x << endl;
}

int main() {
    int num = 5;
    cout << "value brfore func1 : " << num << endl;

    func1(num);
    cout << "value brfore func2 : " << num << endl;
}