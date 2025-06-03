#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    string Sheldon, Raj;

    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> Sheldon >> Raj;
        cout << "Caso #" << i << ": ";
        if (Sheldon == Raj) { cout << "De novo!";
        } else {
            if (Sheldon == "tesoura") {
                if (Raj == "papel" || Raj == "lagarto") cout << "Bazinga!";
                else cout << "Raj trapaceou!";
            } else { if (Sheldon == "papel") {
                if (Raj == "pedra" || Raj == "Spock") cout << "Bazinga!";
                else cout << "Raj trapaceou!";
            } else { if (Sheldon == "pedra") {
                if (Raj == "lagarto" || Raj == "tesoura") cout << "Bazinga!";
                else cout << "Raj trapaceou!";
            } else { if (Sheldon == "lagarto") {
                if (Raj == "Spock" || Raj == "papel") cout << "Bazinga!";
                else cout << "Raj trapaceou!";
            } else { // Sheldon == "Spock"
                if (Raj == "tesoura" || Raj == "pedra") cout << "Bazinga!";
                else cout << "Raj trapaceou!";
            }}}}
        }
        cout << "\n";
    }

    return 0;
}