#include <iostream>
using namespace std;

int reverseNumber(int number) {
    int reverse = 0;

    while (number > 0) {
        int digit = number % 10;
        reverse = reverse * 10 +digit;
        number /= 10;
    }
    return reverse;
}

int main() {
    int n;
    cin >> n;

    int reverse = reverseNumber(n);
    cout << reverse;
}