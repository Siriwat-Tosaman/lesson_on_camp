#include <iostream>
using namespace std;

int main() {
    float n, m, sum;
    string op;
    
    cout << "Insert 1st number: ";
    cin >> n;

    cout << "Insert 2nd number: ";
    cin >> m;

    cout << "Insert Operator: ";
    cin >> op;

    if (op == "+") {
        sum == n + m;
    }
    else if (op == "-") {
        sum == n - m;
    }
    else if (op == "*") {
        sum == n * m;
    }
    else if (op == "/") {
        if (m != 0) {
            sum == n / m;
        }
        else {
            cout << "error";
        }
    }
    else {
        cout << "error";
    }
    return 0;
}