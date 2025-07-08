#include <algorithm>
#include <cctype>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int digitalRoot(int n) {
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}
int main() {
    string nome1, nome2;
    int pontuacao1, pontuacao2;

    while(getline(cin, nome1) && getline(cin, nome2)) {
        pontuacao1 = 0;
        pontuacao2 = 0;
        for (char c : nome1) {
            if (isalpha(c)) {
                c = tolower(c);
                pontuacao1 += c - 'a' + 1;
            }
        }
        for (char c : nome2) {
            if (isalpha(c)) {
                c = tolower(c);
                pontuacao2 += c - 'a' + 1;
            }
        }
        int oneDigit = digitalRoot(pontuacao1);
        int oneDigit2 = digitalRoot(pontuacao2);
        int menor = min(oneDigit, oneDigit2);
        int maior = max(oneDigit, oneDigit2);
        float result = (float) (menor * 100) / (float) maior;
        printf("%.2f %%\n", result);
    }

}
