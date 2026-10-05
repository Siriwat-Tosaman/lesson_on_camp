#include <iostream>
using namespace std;

int main() {
    long long u, price = 0;
    cin >> u;

    if (u > 0) {
        price += 38;
    }
    if (u <= 150) {
        price += (u * 3);
    }
    else if (u <= 400) {
        price += (150 * 3) + (u - 150) * 4;
    }
    else {
        price += (150 * 3) + (400 - 150) * 4 + (u - 400) * 5;
    }

    if (price > 5000) {
        long long total = (price * 95 + 99) / 100;
        cout << total;
        return 0;
    }
    cout << price;

    return 0;
}