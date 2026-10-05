#include <iostream>
using namespace std;

string getAddress() {
    return "SATUN";
}

int main() {
    string Address = getAddress();
    cout << "My Address is " << Address;

    return 0;
}