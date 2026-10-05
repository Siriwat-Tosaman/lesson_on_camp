#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long arr[3] = {a, b, c};
    sort(arr, arr + 3);

    if (arr[0] + arr[1] <= arr[2]) {
        cout << "NOT A TRIANGLE";
        return 0;
    }
    if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) {
        cout << "RIGHT";
    }
    else {
        cout << "NOT RIGHT";
    }

    
    return 0;
}