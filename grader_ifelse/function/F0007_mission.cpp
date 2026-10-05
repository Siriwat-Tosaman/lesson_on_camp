#include <iostream>
#include <cmath>
using namespace std;

string CheckPrime(unsigned long long num) {
    for (unsigned long long i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return " IS NOT A PRIMT NUMBER.";
        }

    }
    return " IS A PRIME NUMBER.";
}

int main() {
    unsigned long long number;
    cin >> number;

    string result = CheckPrime(number);
    cout << number << result;

    return 0;
}