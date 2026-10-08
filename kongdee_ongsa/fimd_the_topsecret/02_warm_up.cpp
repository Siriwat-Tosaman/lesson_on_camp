#include <iostream>
using namespace std;

int main() {
    int s, m, h, sec;
    cin >> s;

    sec = s % 60;
    m = (s % 3600) / 60;
    h = s / 3600;

    cout << h << " " << m << " " << sec;

    return 0;
}