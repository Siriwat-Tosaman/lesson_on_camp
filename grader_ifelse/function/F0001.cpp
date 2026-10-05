#include <iostream>
using namespace std;

void displayNum() {
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
}

void sayHi() {
    cout << "Siriwat Tosaman";
}


int main() {
    while (true) {
        displayNum();
    }
    sayHi();


    
    return 0;
}