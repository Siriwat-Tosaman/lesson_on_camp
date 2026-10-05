#include <iostream>
using namespace std;

int main() {
    long long x, y, k;
    char c;

    cin >> x >> y >> c >> k;

    if (c == 'N') {
        cout << x << " " << y + k;
    }
    else if (c == 'S') {
        cout << x << " " << y - k;
    }
    else if (c == 'E') {
        cout << x + k << " " << y;
    }
    else if (c == 'W') {
        cout << x - k << " " << y;
    }
    else {
        cout << "INVALID";
    }
    
    return 0;
}