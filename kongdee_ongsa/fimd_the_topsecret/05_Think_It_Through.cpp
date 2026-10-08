#include <iostream>
using namespace std;

int main() {
    int u;
    cin >> u;

    if (u <= 50) {
        cout << u * 2;
    }
    else if (u <= 100) {
        cout << (50 * 2) + (u - 50) * 3;
    }
    else {
        cout << (50 * 2) + (50 * 3) + (u - 100) * 5;
    }

    return 0;
}