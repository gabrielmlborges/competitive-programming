#include <iostream>
using namespace std;
int main() {
    int t, n, w1, w2, hj, lj;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        if (n == 1) {
            cout << "Case " << i << ": 0 0" << endl;
            cin >> w1;
            continue;
        }
        bool first = true;
        lj = 0;
        hj = 0;
        for (int k = 0; k < n; k++) {
            cin >> w1;
            if (first) {
                w2 = w1;
                first = false;
                continue;
            }
            if (w1 - w2 < 0) {
                lj++;
            } else if (w1 - w2 > 0) {
                hj++;
            }
            w2 = w1;
        }
        cout << "Case " << i << ": " << hj << " " << lj << endl;
    }
}
