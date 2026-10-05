#include <iostream>
using namespace std;

int parking_fee(int time) {
    int fee;
    if (time <= 3) {
        fee = time * 20;
        return fee;
    }
    else {
        fee = (3 * 20) + (time - 3) * 50;
        if (fee > 300) {
            fee = 300;
        }
        return fee;
    }
}

int main() {
    long long h1, h2, m1, m2;
    cin >> h1 >> m1 >> h2 >> m2;

    int start = h1 * 60 + m1, end = h2 * 60 + m2;
    if (end < start) {
        cout << "INVALID";
        return 0;
    }

    int total = end - start;
    if (total <= 15) {
        cout << "0";
        return 0;
    }

    int h_max = (total + 59) / 60;

    cout << parking_fee(h_max);
    return 0;
}