#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a != b != c && a + b < c) {
        cout << "SCALENE";
    }
    else if (a == b == c) {
        cout << "EQUILATERAL";
    }
    else if (a == b) {
        cout << "ISOSCELES";
    }
    else {
        cout << "NOT A TRIANGLE";
    }
    return 0;
}