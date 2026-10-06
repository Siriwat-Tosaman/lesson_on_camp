#include <iostream>
using namespace std;

long long sumDigit(long long number) {
    long long sum = 0;
    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    return sum;
}

int main() {
    long long number;
    cin >> number;

    long long Result = sumDigit(number);
    cout << Result;
    
    return 0;
}