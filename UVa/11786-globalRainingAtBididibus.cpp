#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
    string dummy;
    getline(cin, dummy);
    for (int i = 0; i < testCases; i++) {
        string montanha;
        getline(cin, montanha);
        stack<int> pilha;
        int agua = 0;
        for (int i = 0; i < montanha.size(); i++) {
            if (montanha[i] == '\\') pilha.push(i);
            else if (montanha[i] == '/' && !pilha.empty()) {
                int posicao = pilha.top();
                pilha.pop();
                agua += i - posicao;
            }
        }
        cout << agua << '\n';
    }
}
