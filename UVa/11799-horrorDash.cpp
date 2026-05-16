#include <iostream>
using namespace std;
int main() {
    int t, n, s, result;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        result = 0;
        for (int k = 0; k < n; k++) {
            cin >> s;
            if (s > result) {
                result = s;
            }
        }
        cout << "Case " << i << ": " << result << endl;
    }
}
