#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        return 0;
    }

    for (int i = 1; i<= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "#";
            } else if (i == j || i + j == n + 1) {
                cout << "x";
            } else if (i % 2 == 0 || j % 2 == 0) {
                cout << "0";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    
}