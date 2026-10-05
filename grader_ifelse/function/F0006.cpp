#include <iostream>
using namespace std;

string GetGrade(int score) {
    if (score >= 50) {
        return "PASS";
    }
    else {
        return "Fail";
    }
}

int main() {
    int score;
    cout << "enter your score : ";
    cin >> score;

    string result = GetGrade(score);
    cout << "your result is : " << result;

    return 0;
}