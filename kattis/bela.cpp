#include <iostream>
#include <map>
using namespace std;
int main() {

    map<char, int> score = {
        {'A', 11}, {'K', 4}, {'Q', 3}, {'J', 2}, {'T', 10}, {'9', 0}, {'8', 0}, {'7', 0}
    };
    int N;
    char B;
    int totalscore = 0;
    cin >> N >> B;
    for (int i = 0; i < N * 4; i++) {
        string card;
        cin >> card;
        if (card[0] == 'J' && card[1] == B) {
            totalscore += 20;
        } else if (card[0] == '9' && card[1] == B) {
            totalscore += 14;
        } else {
            totalscore += score[card[0]];
        }
    }
    cout << totalscore << endl;
}
