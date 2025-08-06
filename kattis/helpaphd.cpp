#include <iostream>
#include <limits>
using namespace std;
int main() {
    int n, l, l2;
    char equals;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (cin >> l) {
            cin >> equals >> l2;
            cout << l + l2 << endl;
        } else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "skipped" << endl;
        }
    }
}
