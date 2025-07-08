#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int result[n];
    n *= 4;
    char matrix[5][n];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int pos = 0;
    for (int i = 0; i < n; i += 4) {
        if (matrix[0][i] == '.') {
            result[pos] = 1;
        } else if (matrix[3][i] == '*') {
            result[pos] = 2;
        } else {
            result[pos] = 3;
        }
        pos++;
    }
    for (int x : result) {
        cout << x;
    }
    cout << endl;
}
