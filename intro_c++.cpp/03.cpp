#include <iostream>
using namespace std;

int main() {
    float price;

    cin >> price;
    float service = price * 10 / 100;
    float total_price = price + service;

    cout << service << "\n" << total_price;
    return 0;
}