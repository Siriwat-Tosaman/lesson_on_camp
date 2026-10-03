#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double r;

    cin >> r;
    double area/*.6f*/ = PI * r * r;
    cout << "area = " << area;
    //cout << "area = " << PI * r * r;
    return 0;
}