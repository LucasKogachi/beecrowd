#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    string p1, p2;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> p1 >> p2;
        if (p1 == "ataque") {
            if (p2 == "ataque") cout << "Aniquilacao mutua";
            else if (p2 == "pedra") cout << "Jogador 1 venceu";
            else cout << "Jogador 1 venceu";
        } else { if (p1 == "pedra") {
            if (p2 == "ataque") cout << "Jogador 2 venceu";
            else if (p2 == "pedra") cout << "Sem ganhador";
            else cout << "Jogador 1 venceu";
        } else { //  p1 == "papel"
            if (p2 == "ataque") cout << "Jogador 2 venceu";
            else if (p2 == "pedra") cout << "Jogador 2 venceu";
            else cout << "Ambos venceram";
        }}
        cout << "\n";
    }
    
    return 0;
}