#include <iostream>
using namespace std;

int main() {
    char zone;
    int w;
    int sum = 0;
    cin >> zone >> w;

    if (w > 20000) {
        sum += 150;
    }
    else if (w > 5000) {
        sum += 60;
    }
    else if (w > 1000) {
        sum += 20;
    }
    
    if (zone == 'A') {
        sum += 30;
    }
    else if (zone == 'B') {
        sum += 50;
    }
    else if (zone == 'C') {
        sum += 80;
    }
    else {
        cout << "INVALID";
        return 0;
    }
    
    cout << sum;
    return 0;
}