#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string DLP[3], winner;
    string DLPW[3] = {"Os atributos dos monstros vao ser inteligencia, sabedoria...",
                      "Iron Maiden's gonna get you, no matter how far!",
                      "Urano perdeu algo muito precioso..."};
    string tie = "Putz vei, o Leo ta demorando muito pra jogar...";
    int v[3], i;

    while (cin >> DLP[0] >> DLP[1] >> DLP[2]) {
        for (i = 0; i < 3; i++) {
            if (DLP[i] == "papel") v[i] = 0;
            else if (DLP[i] == "pedra") v[i] = 1;
            else v[i] = 2; // tesoura
        }
        if (v[0] + v[1] + v[2] == 5) { // win pedra
            for (i = 0; i < 3; i++)
                if (v[i] == 1) winner = DLPW[i];
        } else if (v[0] + v[1] + v[2] == 2) {
            if (v[0] == 1 || v[1] == 1) { // win papel
                for (i = 0; i < 3; i++)
                    if (v[i] == 0) winner = DLPW[i];
            } else { // win tesoura
                for (i = 0; i < 3; i++)
                    if (v[i] == 2) winner = DLPW[i];
            }
        } else winner = tie;
        cout << winner << "\n";
    }

    return 0;
}