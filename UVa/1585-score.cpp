#include <string>
#include <iostream>
using namespace std;
int main() {
    int t, n_O, result;
    string str;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {
        result = 0;
        n_O = 0;
        getline(cin, str);
        for (char ch : str) {
            if (ch == 'O') {
                n_O ++;
                result += n_O;
            } else {
                n_O = 0;
            }
        }
        cout << result << endl;
    }
}
