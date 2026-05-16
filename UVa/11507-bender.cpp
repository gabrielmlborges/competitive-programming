#include <iostream>
#include <map>
using namespace std;
int main() {
    map<pair<string, string>, string> transform;

    transform[{"+x", "+y"}] = "+y";
    transform[{"+x", "-y"}] = "-y";
    transform[{"+x", "+z"}] = "+z";
    transform[{"+x", "-z"}] = "-z";

    transform[{"-x", "+y"}] = "-y";
    transform[{"-x", "-y"}] = "+y";
    transform[{"-x", "+z"}] = "-z";
    transform[{"-x", "-z"}] = "+z";

    transform[{"+y", "+y"}] = "-x";
    transform[{"+y", "-y"}] = "+x";
    transform[{"-y", "+y"}] = "+x";
    transform[{"-y", "-y"}] = "-x";

    transform[{"+z", "+z"}] = "-x";
    transform[{"+z", "-z"}] = "+x";
    transform[{"-z", "+z"}] = "+x";
    transform[{"-z", "-z"}] = "-x";

    int L;
    while (cin >> L && L) {
        string curr = "+x";
        for (int i = 0; i < L - 1; i++) {
            string command;
            cin >> command;
            if (command == "No") continue;
            if (transform.find({curr, command}) != transform.end()) curr = transform[{curr, command}];
        }
        cout << curr << '\n';
    }
}
