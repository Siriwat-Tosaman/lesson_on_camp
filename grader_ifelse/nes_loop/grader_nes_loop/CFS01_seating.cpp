#include <iostream>
using namespace std;

int main() {
    int R, C, K;
    cin >> R >> C >> K;

    if (R < 1 || R > 20 || C < 1 || C > 20 || K < 1 || K > 400) {
        return 0;
    }

    int count = 0;

    for (int row = 0; row < R; row++) {
        for (int col = 0; col < C; col++) {
            int seat;

            if (row % 2 == 0) {
                seat = row * C + col + 1;
            } else {
                seat = (row + 1) * C - col;
            }

            if (col > 0) {
                cout << " ";
            }

            if (seat % K == 0) {
                cout << "X";
            } else {
                cout << seat;
                count++;
            }
        }
        cout << '\n';
    }

    cout << count;

    return 0;
}
