#include <iostream>
#include <string>
using namespace std;

int bit_for(char c) {
    if (c == 'R') return 1 << 0;
    else if (c == 'B') return 1 << 1;
    else return 1 << 2;
}

char counter(char c) {
    if (c == 'R') return 'S';
    else if (c == 'B') return 'K';
    else return 'H';
}

int main() {
    string line;
    getline(cin, line);
    int i = 0;
    while (i < line.size()) {
        if (i + 2 < line.size()) {
            int mask = bit_for(line[i]) | bit_for(line[i + 1]) | bit_for(line[i + 2]);
            if (mask == 7) {
                cout << 'C';
                i += 3;
                continue;
            }
        }
        cout << counter(line[i]);
        i++;
    }
    cout << '\n';
}
