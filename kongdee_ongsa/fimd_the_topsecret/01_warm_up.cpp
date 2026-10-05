#include <iostream>
using namespace std;

int main() {
    int p, n, b, sum;
    cin >> p >> n >> b;
    int price = p * n;

    sum = b - price;
    if (sum < 0) {
        cout << "NEED " << -sum;
    }
    else {
        cout << "CHANGE " << sum;
    }
    return 0;
}
