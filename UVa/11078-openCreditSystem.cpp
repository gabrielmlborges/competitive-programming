#include <iostream>
#include <climits>
using namespace std;
int main() {
    int t, n, x, j, maiorSenior, maiorDiff, dif;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        maiorDiff = INT_MIN;
        int valores[n];
        for (int k = 0; k < n; k++) {
            cin >> x;
            if (k == 0) {
                maiorSenior = x;
                continue;
            }
            dif = maiorSenior - x;
            if (dif > maiorDiff) {
                maiorDiff = dif;
            }
            if (x > maiorSenior) {
                maiorSenior = x;
            }
        }
            cout << maiorDiff << endl;
    }
}
