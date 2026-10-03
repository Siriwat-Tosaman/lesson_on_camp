#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

namespace {

void printMenu() {
    cout << "โปรแกรมคำนวณพื้นที่สี่เหลี่ยม\n"
         << "1. สี่เหลี่ยมจัตุรัส\n"
         << "2. สี่เหลี่ยมผืนผ้า\n"
         << "3. สี่เหลี่ยมด้านขนาน\n"
         << "4. สี่เหลี่ยมขนมเปียกปูน\n"
         << "5. สี่เหลี่ยมคางหมู\n"
         << "6. สี่เหลี่ยมว่าว\n"
         << "7. สี่เหลี่ยมทั่วไป (ระบุพิกัดจุดยอด)\n"
         << "เลือกชนิด (1-7): ";
}

bool readPositive(const char* prompt, double& value) {
    cout << prompt;
    return static_cast<bool>(cin >> value) && isfinite(value) && value > 0.0;
}

double calculateShoelaceArea(const double x[4], const double y[4]) {
    double twiceArea = 0.0;
    for (int i = 0; i < 4; ++i) {
        const int next = (i + 1) % 4;
        twiceArea += x[i] * y[next] - x[next] * y[i];
    }
    return fabs(twiceArea) / 2.0;
}

}  // namespace

int main() {
    printMenu();

    int choice;
    if (!(cin >> choice) || choice < 1 || choice > 7) {
        cerr << "กรุณาเลือกหมายเลข 1-7\n";
        return 1;
    }

    double area = 0.0;

    switch (choice) {
        case 1: {
            double side;
            if (!readPositive("ความยาวด้าน: ", side)) break;
            area = side * side;
            break;
        }
        case 2: {
            double width, length;
            if (!readPositive("ความกว้าง: ", width) ||
                !readPositive("ความยาว: ", length))
                break;
            area = width * length;
            break;
        }
        case 3: {
            double base, height;
            if (!readPositive("ความยาวฐาน: ", base) ||
                !readPositive("ความสูงตั้งฉาก: ", height))
                break;
            area = base * height;
            break;
        }
        case 4:
        case 6: {
            double diagonal1, diagonal2;
            if (!readPositive("ความยาวเส้นทแยงมุมเส้นที่ 1: ", diagonal1) ||
                !readPositive("ความยาวเส้นทแยงมุมเส้นที่ 2: ", diagonal2))
                break;
            area = diagonal1 * diagonal2 / 2.0;
            break;
        }
        case 5: {
            double base1, base2, height;
            if (!readPositive("ความยาวด้านคู่ขนานด้านที่ 1: ", base1) ||
                !readPositive("ความยาวด้านคู่ขนานด้านที่ 2: ", base2) ||
                !readPositive("ความสูงตั้งฉาก: ", height))
                break;
            area = (base1 + base2) * height / 2.0;
            break;
        }
        case 7: {
            double x[4], y[4];
            cout << "ป้อนพิกัด x y ของจุดยอด 4 จุดเรียงรอบรูป\n";
            for (int i = 0; i < 4; ++i) {
                cout << "จุดที่ " << i + 1 << ": ";
                if (!(cin >> x[i] >> y[i]) || !isfinite(x[i]) || !isfinite(y[i])) {
                    cerr << "พิกัดไม่ถูกต้อง\n";
                    return 1;
                }
            }
            area = calculateShoelaceArea(x, y);
            break;
        }
    }

    if (!isfinite(area) || area <= 0.0) {
        cerr << "ข้อมูลไม่ถูกต้อง หรือพื้นที่เป็นศูนย์\n";
        return 1;
    }

    cout << fixed << setprecision(2)
         << "พื้นที่ = " << area << " ตารางหน่วย\n";
    return 0;
}
