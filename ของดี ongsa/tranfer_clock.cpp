#include <iostream>
using namespace std;

int main() {
    int s, m, h, sec;
    cin >> s;

    sec = s % 60;
    m = (s % 3600) / 60;
    h = s/ 3600;

    if (h < 10) {
        cout << "0";
    }
    cout << h << ":";

    if (m < 10) {
        cout << "0";
    }
    cout << m << ":";

    if (sec < 10) {
        cout << "0";
    }
    cout << sec;
    return 0;
}