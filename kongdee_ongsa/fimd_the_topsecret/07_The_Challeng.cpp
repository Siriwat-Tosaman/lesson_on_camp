#include <iostream>
using namespace std;

int checkYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 29;
            }
            return 28;
        }
        return 29;
    }
    return 28;
}

int main() {
    int d, m, y, d_ref;
    cin >> d >> m >> y;

    if (m < 1 || m > 12 || y < 1) {
        cout << "INVALID";
        return 0;
    }

    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            d_ref = 31;
            break;
        case 4: case 6: case 9: case 11:
            d_ref = 30;
            break;
        case 2:
            d_ref = checkYear(y);
            break;
    }

    if (d < 1 || d > d_ref) {
        cout << "INVALID";
        return 0;
    }

    if (d == d_ref && m == 12) {
        cout << 1 << " " << 1 << " " << y + 1;
        return 0;
    }
    else if (d == d_ref) {
        cout << 1 << " " << m + 1 << " " << y;
        return 0;
    }
    cout << d + 1 << " " << m << " " << y;

    return 0;
}