#include <iostream>
using namespace std;
int main() {
    int b, n, d, c, v;
    while(cin >> b >> n && (b != 0 || n != 0)) {
        int arr[b];
        bool flag = true;
        for (int i = 0; i < b; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> d >> c >> v;
            arr[d - 1] -= v;
            arr[c - 1] += v;
        }
        for (int x : arr) {
            if (x < 0) {
                flag = false;
            }
        }
        if (flag) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }
}
