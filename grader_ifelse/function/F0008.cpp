#include <iostream>
using namespace std;

void transferYear(int year) {
    cout << year + 543;
}

int main() {
    int year;
    cin >> year;

    transferYear(year);
    return 0;
}