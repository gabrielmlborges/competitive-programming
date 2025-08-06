#include <iostream>
using namespace std;
int main() {
    int n, m, r;
    cin >> n >> m;
    if (n > m) {
        r = n - m;
        if (r == 1) {
            cout << "Dr. Chaz needs " << r << " more piece of chicken!" << endl;
        } else {
            cout << "Dr. Chaz needs " << r << " more pieces of chicken!" << endl;
        }
    } else {
        r = m - n;
        if (r == 1) {
            cout << "Dr. Chaz will have " << r << " piece of chicken left over!";
        } else {
            cout << "Dr. Chaz will have " << r << " pieces of chicken left over!";
        }
    }
}
