#include <iostream>
using namespace std;
int main() {
    string word;
    int n = 1;
    cin >> word;
    while (word != "#") {
        if (word == "HELLO") {
            cout << "Case " << n << ": ENGLISH" << endl;
        } else if (word == "HOLA") {
            cout << "Case " << n << ": SPANISH" << endl;
        } else if (word == "HALLO") {
            cout << "Case " << n << ": GERMAN" << endl;
        } else if (word == "BONJOUR") {
            cout << "Case " << n << ": FRENCH" << endl;
        } else if (word == "CIAO") {
            cout << "Case " << n << ": ITALIAN" << endl;
        } else if (word == "ZDRAVSTVUJTE") {
            cout << "Case " << n << ": RUSSIAN" << endl;
        } else {
            cout << "Case " << n << ": UNKNOWN" << endl;
        }
        n += 1;
        cin >> word;
    }
}
