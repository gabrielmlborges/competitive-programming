#include <iostream>
using namespace std;
int main() {
    long long n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        long long low = 0, hight = 2e9, result = 0;
        while (low <= hight) {
            long long mid = (low + hight) / 2;
            long long guess = (mid * (mid + 1)) / 2;

            if (guess <= m) {
                result = mid;
                low = mid + 1;
            } else {
                hight = mid - 1;
            }
        }
        cout << result << endl;
    }
}
