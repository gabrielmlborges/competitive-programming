#include <iostream>
using namespace std;
int main() {
    int n, x;
    long long k, k2;
    x = 0;
    k2 = 1e9 + 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k < k2) {
            k2 = k;
            x = i;
        }
    }
    cout << x << endl;
}
