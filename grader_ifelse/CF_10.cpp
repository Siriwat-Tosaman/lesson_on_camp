#include <iostream>
using namespace std;

int main() {
    unsigned int L, w1, w2, w3;
    cin >> L >> w1 >> w2 >> w3;
    int sum = w1 + w2 + w3;

    if (sum <= L) {
        cout << "OK";
    }
    else {
        cout << "OVERWEIGHT";
    }
    return 0;
}