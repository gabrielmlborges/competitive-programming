#include <iostream>
using namespace std;
int main() {
    int a, b;
    int flipA[3];
    int flipB[3];

    cin >> a >> b;

    flipA[2] = a / 100;
    a = a % 100;
    flipA[1] = a / 10;
    a = a % 10;
    flipA[0] = a;

    flipB[2] = b / 100;
    b = b % 100;
    flipB[1] = b / 10;
    b = b % 10;
    flipB[0] = b;

    a = flipA[2] + (flipA[1] * 10) + (flipA[0] * 100);
    b = flipB[2] + (flipB[1] * 10) + (flipB[0] * 100);

    if (a > b) {
        cout << a << endl;
    } else {
        cout << b << endl;
    }
}
