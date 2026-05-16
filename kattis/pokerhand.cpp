#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int power = 0;
    string cards;
    unordered_map<char, int> freq;
    for (int i = 0; i < 5; i++) {
        cin >> cards;
        char rank = cards[0];
        freq[rank]++;
        if (freq[rank] > power) {
            power = freq[rank];
        }
    }
    cout << power;
}
