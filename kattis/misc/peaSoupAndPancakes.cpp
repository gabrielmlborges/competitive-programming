#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string dummy;
    getline(cin, dummy);
    string winner;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        getline(cin, dummy);
        string restaurant;
        getline(cin, restaurant);
        bool temPancakes = false, temPea = false;
        for (int j = 0; j < k; j++) {
            string item;
            getline(cin, item);
            if (item == "pea soup") temPea = true;
            if (item == "pancakes") temPancakes = true;
        }
        if (winner.empty() && temPea && temPancakes) {
                winner = restaurant;
        }
    }
    if (winner.empty()) {
        cout << "Anywhere is fine I guess\n";
    } else {
        cout << winner << endl;
    }
}
