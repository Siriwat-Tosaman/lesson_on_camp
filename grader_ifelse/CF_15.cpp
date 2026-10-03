#include <bits/stdc++.h>
using namespace std;

int main() {
    char grade;
    cin >> grade;

    switch(grade) {
        case 'A': case 'a':
            cout << "4";
            break;
        case 'B': case 'b':
            cout << "3";
            break;
        case 'C': case 'c':
            cout << "2";
            break;
        case 'D': case 'd':
            cout << "1";
            break;
        case 'F': case 'f':
            cout << "0";
            break;
        default:
            cout << "INVALID";
            break;
    }
}