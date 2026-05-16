#include <iostream>
using namespace std;
int main() {
    int l, r;
    cin >> l >> r;
    if (l == 0 && r == 0) {
        cout << "Not a moose" << endl;
    } else if (l == r) {
        cout << "Even " << l + r << endl;
    } else if (l > r) {
        cout << "Odd " << 2*l << endl;
    } else {
        cout << "Odd " << 2*r << endl;
    }
}
