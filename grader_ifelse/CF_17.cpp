#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a > b) {
        swap(a, b);
    }
    if (c > d) {
        swap(c, d);
    }

    if (a > c && a < d) {
        cout << "YES";
    }
    else if (b > c && b < d) {
        cout << "YES";
    }
    else if ()
    else {
        cout << "NO";
    }

    return 0;
}