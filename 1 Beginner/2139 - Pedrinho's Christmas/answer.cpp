#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, D;
    int falta[11] = {360, 329, 300, 269, 239, 208, 178, 147, 116, 86, 55};

    while (cin >> M) {
        cin >> D;
        if (M == 12) {
            if (D < 24)
                cout << "Faltam " << 25 - D << " dias para o natal!";
            else if (D > 25) cout << "Ja passou!";
            else if (D == 25) cout << "E natal!";
            else cout << "E vespera de natal!";
        } else {
            cout << "Faltam " << falta[M-1] - D << " dias para o natal!";
        }
        cout << "\n";
    }
    
    return 0;
}