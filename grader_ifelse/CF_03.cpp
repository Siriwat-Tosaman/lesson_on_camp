#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 0) {
        cout << "ORIGIN";
    }
    else if (x == 0) {
        cout << "Y-AXIS";
    }
    else if (y == 0) {
        cout << "X-AXIS";
    }
    else if (x > 0 && y > 0) {
        cout << "Q1";
    }
    else if (x > 0) {
        cout << "Q4";
    }
    else if (y > 0) {
        cout << "Q2";
    }
    else {
        cout << "Q3";
    }
    return 0;
}