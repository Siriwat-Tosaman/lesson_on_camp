#include <iostream>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;

    // ตรวจสอบเวลา
    if (h < 0 || h > 23 || m < 0 || m > 59) {
        cout << "INVALID";
        return 0;
    }

    // คูณมุมด้วย 2 เพื่อไม่ต้องใช้ double
    int hourAngle = (h % 12) * 60 + m;
    int minuteAngle = m * 12;

    int diff = hourAngle - minuteAngle;

    if (diff < 0)
        diff = -diff;

    // เลือกมุมที่เล็กกว่า
    if (diff > 360)
        diff = 720 - diff;

    // แสดงผล
    if (diff % 2 == 0) {
        cout << diff / 2;
    } else {
        cout << diff / 2 << ".5";
    }

    return 0;
}