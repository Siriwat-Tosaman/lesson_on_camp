#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age >= 0 && age <= 120) {
        if (age >= 60) {
            cout << "60";
        }
        else if (age > 12) {
            cout << "120";
        }
        else if (age > 2) {
            cout << "50";
        }
        else {
            cout << "0";
        }
    }
    else {
        cout << "INVALID";
    }
    return 0;
}