#include <cstdlib>
#include <iostream>
#include <limits>
#include <random>

using namespace std;

int main() {
	random_device rd;
	mt19937 generator(rd());
	bool playAgain = true;

	cout << "=== Amazing Number Guessing Game! ===\n";

	while (playAgain) {
		int secret = uniform_int_distribution<int>(1, 100)(generator);
		int guess = 0;
		int attempts = 0;
		const int maxAttempts = 7;

		cout << "I have hidden a number from 1 to 100!\n"
			 << "You have " << maxAttempts << " chances to guess.\n";

		while (attempts < maxAttempts && guess != secret) {
			cout << "\nAttempt " << attempts + 1 << ": ";

			if (!(cin >> guess)) {
				cout << "Please enter a number!\n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}

			if (guess < 1 || guess > 100) {
				cout << "Your guess must be between 1 and 100!\n";
				continue;
			}

			++attempts;
			if (guess == secret) {
				cout << "\nCorrect! The number is " << secret << " Great job!\n";
				if (attempts == 1) cout << "Excellent! You guessed it on the first try!\n";
				else cout << "You guessed correctly in " << attempts << " attempts\n";
			} else {
				cout << (guess < secret ? "Higher!" : "Lower!");
				int difference = abs(secret - guess);
				if (difference <= 5) cout << " Very close! 🔥";
				else if (difference >= 25) cout << " Still far away!";
				cout << "\nYou have " << maxAttempts - attempts << " attempts left\n";
			}
		}

		if (guess != secret) {
			cout << "No more attempts left! The hidden number was " << secret << "\n";
		}

		cout << "\nPlay again? (1 = Yes, 0 = No): ";
		while (!(cin >> playAgain) || (playAgain != 0 && playAgain != 1)) {
			cout << "Please enter 1 or 0: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}

	cout << "Thank you for playing! Come back and challenge me again!\n";
	return 0;
}
