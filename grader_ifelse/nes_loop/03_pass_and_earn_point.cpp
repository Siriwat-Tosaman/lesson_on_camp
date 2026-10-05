#include <iostream>
using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n >> k;

    for (int c10 = 0; c10 <= n; c10++) {
        for (int c5 = 0; c5 <= n; c5++) {
            for (int c2 = 0; c2 <= n; c2++) {
                for (int c1 = 0; c1 <= n; c1++) {
                    if (c10 * 10 + c5 * 5 + c2 * 2 + c1 == n) {
                        if (c10 + c5 + c2 + c1 <= k) {
                            count += 1;
                        }
                    }
                }
            }
        }
    }
    cout << count;

    return 0;
}
//ไม่เกินคือ <=