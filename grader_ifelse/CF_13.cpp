#include <iostream>
using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;

	if (a == 0) {
		cout << "ZERO";
	} else {
		if (b == 0) {
			cout << "ZERO";
		} else {
			if (a > 0) {
				if (b > 0) {
					cout << "POSITIVE";
				} else {
					cout << "NEGATIVE";
				}
			} else {
				if (b > 0) {
					cout << "NEGATIVE";
				} else {
					cout << "POSITIVE";
				}
			}
		}
	}

	return 0;
}
