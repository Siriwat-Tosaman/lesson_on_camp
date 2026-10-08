#include <iostream>

using namespace std;

int main() {
	long long x1;
	long long v1, x2, v2;
	long long left, right, limit;

	cin >> x1 >> v1 >> x2 >> v2
		>> left >> right >> limit;

	long long position1 = x1;
	long long position2 = x2;

	for (long long t = 0; t <= limit; ++t) {
		if (position1 == position2
			&& position1 >= left && position1 <= right) {
			cout << t;
			return 0;
		}

		if (t == limit) {
			break;
		}

		position1 += v1;
		position2 += v2;
	}

	cout << "NEVER";

	return 0;
}