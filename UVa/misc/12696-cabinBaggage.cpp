#include <iostream>
using namespace std;
int main() {
    int t;
    float arr[4];
    cin >> t;
    int total = 0;
    for (int i = 0; i < t; i++) {
        bool allowed = true;
        for (int j = 0; j < 4; j++) {
            cin >> arr[j];
        }
        float sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += arr[i];
        }
        if (((arr[0] > 56.0 || arr[1] > 45.0 || arr[2] > 25.0) && sum > 125.0) || arr[3] > 7.0) {
            allowed = false;
        }
        if (allowed) {
            cout << 1 << endl;
            total++;
        } else {
            cout << 0 << endl;
        }
    }
    cout << total << endl;
}
