#include <iostream>
using namespace std;

int main() {
	long long x1, y1, x2, y2, px, py;
	cin >> x1 >> y1 >> x2 >> y2 >> px >> py;

	if (px < x1 || px > x2 || py < y1 || py > y2) {
		cout << "OUTSIDE";
	} else if (px == x1 || px == x2 || py == y1 || py == y2) {
		cout << "EDGE";
	} else {
		cout << "INSIDE";
	}

	return 0;
}
