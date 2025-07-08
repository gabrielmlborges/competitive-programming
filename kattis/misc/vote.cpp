#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int totalVotes = 0, winner = 0, maxVotes = 0, countMax = 0;
        for (int j = 0; j < n; j++) {
            int votes;
            cin >> votes;
            totalVotes += votes;
            if (votes > maxVotes) {
                winner = j + 1;
                maxVotes = votes;
                countMax = 1;
            } else if (votes == maxVotes) {
                ++countMax;
            }
        }
        if (countMax > 1) {
            cout << "no winner\n";
        } else if (maxVotes * 2 > totalVotes) {
            cout << "majority winner " << winner << endl;
        } else {
            cout << "minority winner " << winner << endl;
        }
    }
}
