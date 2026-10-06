#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else return fibonacci(n - 2) + fibonacci(n - 1);
}

int main() {
    long long n;
    cin >> n;

    long long fibonacci_n = fibonacci(n);
    cout << fibonacci_n;
    return 0;
}