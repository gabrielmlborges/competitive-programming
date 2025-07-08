#include <iostream>
using namespace std;
int main() {
    int n, count_walk, x;
    count_walk = 0;
    double result;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x < 0) {
            count_walk++;
            continue;
        }
        result += x;
    }
    result /= double (n - count_walk);
    cout << result;
}
