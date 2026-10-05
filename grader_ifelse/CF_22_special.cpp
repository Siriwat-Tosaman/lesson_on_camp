#include <iostream>
#include <string>
using namespace std;

int main() {
	string moves;
	cin >> moves;

	bool hasR = moves.find('R') != string::npos;
	bool hasP = moves.find('P') != string::npos;
	bool hasS = moves.find('S') != string::npos;

	int differentMoves = 0;
	if (hasR) ++differentMoves;
	if (hasP) ++differentMoves;
	if (hasS) ++differentMoves;

	if (differentMoves != 2) {
		cout << "DRAW";
		return 0;
	}

	char winningMove;
	if (hasR) {
		if (hasP) winningMove = 'P';
		else winningMove = 'R';
	} else {
		winningMove = 'S';
	}

	bool first = true;
	for (int i = 0; i < 3; ++i) {
		if (moves[i] == winningMove) {
			if (!first) cout << ' ';
			cout << i + 1;
			first = false;
		}
	}

	return 0;
}
