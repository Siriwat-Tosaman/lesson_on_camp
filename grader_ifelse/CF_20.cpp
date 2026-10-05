#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float w, h;
    cin >> w >> h;
    float h_meter = h / 100;
    float BMI = w / (h_meter * h_meter);

    BMI = round(BMI * 10) / 10.0;
    
    if (BMI >= 25) {
        cout << "OBESE";
    }
    else if (BMI >= 23) {
        cout << "OVER";
    }
    else if (BMI >= 18.5) {
        cout << "NORMAL";
    }
    else {
        cout << "UNDER";
    }

    return 0;
}