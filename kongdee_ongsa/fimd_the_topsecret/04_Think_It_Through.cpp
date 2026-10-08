#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b && a >= c && b >= c) {
        cout << b;
        return 0;
    }
    if (a >= b && a >= c && c >= b) {
        cout << c;
        return 0;
    }
    if (c >= a && c >= b && a >= b) {
        cout << a;
        return 0;
    }
    if (c >= a && c >= b && b >= a) {
        cout << b;
        return 0;
    }
    if (b >= c && b >= a && c >= a) {
        cout << c;
        return 0;
    }
    if (b >= c && b >= a && a >= c) {
        cout << a;
        return 0;
    }
}