#include <iostream>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;

    if (h < 0 || h > 23 || m < 0 || m > 59) {
        cout << "INVALID";
        return 0;
    }
    switch(h) {
        case 5: case 6: case 7: case 8: case 9: case 10: case 11:
            cout << "MORNING";
            break;
        case 12: case 13: case 14: case 15: case 16:
            cout << "AFTERNOON";
            break;
        case 17: case 18: case 19: case 20:
            cout << "EVENING";
            break;
        case 21: case 22: case 23: case 24: case 0: case 1: case 2: case 3: case 4:
            cout << "NIGHT";
            break;
        default:
            break;
    }
    return 0;
}