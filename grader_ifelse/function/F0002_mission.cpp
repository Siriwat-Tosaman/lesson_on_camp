#include <iostream>
using namespace std;

void tree() {
    for (int i = 1; i <= 5; i++) {
        for (int k = 1; k <= 5 - i; k++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void leg() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 3; k++) {
            cout << "*";
        }
        cout << endl;
    }
    
}

int main() {
    tree();
    leg();

    return 0;
}