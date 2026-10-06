#include <iostream>
using namespace std;

int factorial(unsigned long long x) {
    if (x <= 1) {
        return 1;
    }
    else {
        return x * factorial(x - 1);
    }
}

int main() {
    unsigned long long number;
    cin >> number;

    unsigned long long value = factorial(number);
    cout << "your answer is : " << value;
    return 0;
}