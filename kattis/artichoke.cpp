#include <cmath>
#include <ios>
#include <iostream>
using namespace std;
int main() {
    int p, a, b, c, d, n;
    double result, max_result, diff, max_diff;
    cin >> p >> a >> b >> c >> d >> n;
    max_diff = 0.0;
    for (int i = 1; i <= n; i++) {
        diff = 0.0;
        result = p * (sin((a * i) + b) + cos((c * i) + d) + 2);
        if (i == 1) {
            max_result = result;
            continue;
        }
        if (max_result > result) {
            diff = max_result - result;
        }
        if (result > max_result) {
            max_result = result;
        }
        if (diff > max_diff) {
            max_diff = diff;
        }
    }
    cout.precision(10);
    cout << fixed << max_diff << endl;
}
