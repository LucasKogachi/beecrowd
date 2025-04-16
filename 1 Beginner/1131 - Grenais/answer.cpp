#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    int inter = 0, gremio = 0, empate = 0;
    int X;

    cout << fixed << setprecision(2);
    do {
        cin >> A >> B;
        if (A > B) inter++;
        else if (A < B) gremio++;
        else empate++;
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> X;
    } while (X == 1);
    cout << inter + gremio + empate << " grenais\n";
    cout << "Inter:" << inter << "\n";
    cout << "Gremio:" << gremio << "\n";
    cout << "Empates:" << empate << "\n";
    if (inter > gremio) cout << "Inter venceu mais\n";
    else if (inter < gremio) cout << "Gremio venceu mais\n";
    else cout << "Nao houve vencedor\n";
    
    return 0;
}