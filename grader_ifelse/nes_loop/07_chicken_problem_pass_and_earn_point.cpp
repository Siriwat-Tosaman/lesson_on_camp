#include <iostream>
using namespace std;

int main() {
    for (int cb = 0; cb <= 20; cb++) {
        for (int cg = 0; cg <= 35; cg++) {
            for (int cc = 0; cc <= 300; cc += 3) {
                if (cb + cg + cc == 100) {
                    if (cb * 5 + cg * 3 + cc/3 == 100) {
                        cout << cb << " " << cg << " " << cc << endl;
                    }
                }
            }
        } 
    }
    return 0;
}