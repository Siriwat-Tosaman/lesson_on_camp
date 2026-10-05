#include <iostream>
using namespace std;

int DayFeb(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0 || year % 400 == 0) {
            if (year % 400 == 0) {
                return 29;
                //return "is Leap year";
            }
            return 28;
            //return "is not Leap year";
        }
        return 29;
        //return "is Leap year";
    }
    else {
        return 28;
        //return "is not Leap year";
    }
}

int main() {
    int d, m, y, DayOfMonth;
    cin >> d >> m >> y;

    if (m < 1 || m > 12 || d < 1) {
        cout << "INVALID";
        return 0;
    }
    
    switch(m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            DayOfMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            DayOfMonth = 30;
            break;
        case 2:
            DayOfMonth = DayFeb(y);
            break;
        default:
            cout << "INVALID";
            return 0;
    }

    if (d > DayOfMonth) {
        cout << "INVALID";
        return 0;
    }
    if (d < DayOfMonth) {
        cout << d + 1 << " " << m << " " << y;
        return 0;
    }
    else if (d == DayOfMonth) {
        if (m == 12) {
            cout << 1 << " " << 1 << " " << y + 1;
            return 0;
        }
        cout << 1 << " " << m + 1 << " " << y;
        return 0;
    }


    return 0;
}