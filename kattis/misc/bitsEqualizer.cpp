#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int C;
    cin >> C;
    cin.ignore();
    for (int caseNum = 1; caseNum <= C; caseNum++) {
        string S, T;
        getline(cin, S);
        getline(cin, T);
        int a = 0, b = 0, c = 0, d = 0;
        for (int i = 0; i < (int)S.size(); i++) {
            if (S[i] == T[i]) continue;
            if (S[i] == '0') a++;
            else if (S[i] == '1') b++;
            else if (T[i] == '0') c++;
            else d++;
        }
        int moves = 0;
        int x = min(a, b);
        moves += x;
        a -= x;
        b -= x;
        int y = min(b, d);
        moves += 2 * y;
        b -= y;
        d -= y;
        if (b > 0) {
            cout << "Case " << caseNum << ": -1\n";
            continue;
        }
        moves += a + c + d;
        cout << "Case " << caseNum << ": " << moves << "\n";
    }
    return 0;
}

