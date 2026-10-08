#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);

    if (a + b <= c) {
        cout << "INVALID";
        return 0;
    }

    if (a == b && b == c)
        cout << "EQUILATERAL ";
    else if (a == b || b == c || a == c)
        cout << "ISOSCELES ";
    else
        cout << "SCALENE ";

    long long ab = a * a;
    long long bb = b * b;
    long long cc = c * c;

    if (ab + bb == cc)
        cout << "RIGHT";
    else if (ab + bb > cc)
        cout << "ACUTE";
    else
        cout << "OBTUSE";

    return 0;
}