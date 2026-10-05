#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	long long ax1, ay1, ax2, ay2;
	long long bx1, by1, bx2, by2;
	std::cin >> ax1 >> ay1 >> ax2 >> ay2 >> bx1 >> by1 >> bx2 >> by2;

	long long width = min(ax2, bx2) - max(ax1, bx1);
	long long height = min(ay2, by2) - max(ay1, by1);

	width = max(0LL, width);
	height = max(0LL, height);
	cout << width * height << '\n';
	return 0;
}
