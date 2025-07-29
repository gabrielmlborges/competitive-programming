#include <iostream>
#include <map>
#include <set>
using namespace std;
int main() {
    int qntCartas, qntJogadas;
    cin >> qntCartas >> qntJogadas;
    map<string, set<int>> cartas;
    set<int> cartasUsadas;
    int pontos = 0;
    while (qntJogadas--) {
        int numero1, numero2;
        string nome1, nome2;
        cin >> numero1 >> numero2 >> nome1 >> nome2;
        if (nome1 != nome2) {
            cartas[nome1].insert(numero1);
            cartas[nome2].insert(numero2);
        } else {
            cartasUsadas.insert(numero1);
            cartasUsadas.insert(numero2);
        }
    }
    int cardsB = 0, cardsC = 0;
    for (auto &[nomeCarta, pos] : cartas) {
        if (pos.size() == 2) {
            auto it = pos.begin();
            int p1 = *it;
            int p2 = *(++it);
            if (cartasUsadas.count(p1) == 0 && cartasUsadas.count(p2) == 0) {
                cardsB += 2;
            }
        } else {
            int a = *pos.begin();
            if (cartasUsadas.count(a) == 0) {
                cardsC += 1;
            }
        }
    }
    int cartasDesc = qntCartas - (int)cartasUsadas.size();
    int cardsD = cartasDesc - cardsB - cardsC;

    pontos = cardsB / 2;

    if (cardsC == cardsD) {
        pontos += cardsC;
    } else if (cardsD == 2) {
        pontos += 1;
    }
    cout << pontos << endl;
}
