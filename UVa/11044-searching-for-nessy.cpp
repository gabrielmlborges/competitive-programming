#include <iostream>
using namespace std;
int main() {
    int input, n, m, area, result, qntCols, qntLin;
    cin >> input;
    for (int i = 0; i < input; i++) {
        cin >> n >> m;
        qntCols = m / 3;
        qntLin = n / 3;
        result = qntCols * qntLin;
        cout << result << endl;
    }
}
