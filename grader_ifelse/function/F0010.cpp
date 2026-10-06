#include <bits/stdc++.h>
using namespace std;

float Calculate(int a, int b, int c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    float Area = Calculate(a, b, c);
    cout << Area;
    return 0;
}