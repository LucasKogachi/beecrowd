#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, PA, PB, GPA, GPB;
    double G1, G2;
    int anos;
    double err = 0.0001; // error

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> PA >> PB >> G1 >> G2;
        anos = 0;
        while (anos < 101) {
            GPA = (PA * (G1 / 100.0) + err);
            PA += GPA;
            GPB = (PB * (G2 / 100.0) + err);
            PB += GPB;
            anos++;
            if (PA > PB) break;
        }
        if (anos > 100)
            cout << "Mais de 1 seculo.\n";
        else
            cout << anos << " anos.\n";
    }
    
    return 0;
}