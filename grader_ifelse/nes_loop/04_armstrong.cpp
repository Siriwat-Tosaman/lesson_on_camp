#include <iostream>
using namespace std;

int main() {
    int n, before_sum = 1, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int temp = i;

        while (temp > 0) {
            int digit = temp % 10;
            temp /= 10;
            for (int k = 1; k <= 3; k++) {
                before_sum *= digit;
            }
            sum =+ before_sum;
        }
        
        if (before_sum == i) {
            cout << i;
        }
    }

    return 0;
}