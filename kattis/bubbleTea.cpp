#include <iostream>
using namespace std;
int main() {
    int n, k, y, value, poss, money, result;
    int minValue = 1000000000;
    bool found = false;
    cin >> n;
    int arrM[n];
    for (int i = 0; i < n; i++) {
        cin >> arrM[i];
    }
    cin >> k;
    int arrK[k];
    for (int i = 0; i < k; i++) {
        cin >> arrK[i];
    }
    for (int j = 0; j < n; j++) {
        cin >> y;
        for (int i = 0; i < y; i++) {
            cin >> poss;
            value = arrM[j] + arrK[poss - 1];
            if (value < minValue) {
                minValue = value;
                found = true;
            }
        }
    }
    cin >> money;
    if (!found) {
        cout << 0 << endl;
    } else {
        result = (money / minValue) - 1;
        if (result < 0) result = 0;
        cout << result << endl;
    }
}
