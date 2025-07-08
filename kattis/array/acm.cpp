#include <iostream>
using namespace std;
int main() {
    int time;
    char ch;
    string result;
    int out1 = 0, out2 = 0;
    bool solved[26] = {false};
    int penalty[26] = {0};
    int solveTime[26] = {0};
    while (cin >> time && time != -1) {
        cin >> ch >> result;
        if (result == "right") {
            solved[ch - 'A'] = true;
            solveTime[ch - 'A'] = time;
        } else {
            penalty[ch - 'A'] += 20;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (solved[i]) {
            out1 += 1;
            out2 += penalty[i] + solveTime[i];
        }
    }
    cout << out1 << " " << out2 << endl;
}
