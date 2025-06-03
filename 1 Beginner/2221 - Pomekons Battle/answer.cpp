#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, B, A, D, L, battle;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> B >> A >> D >> L;
        battle = A + D;
        battle += (!(L & 1)) ? 2*B : 0;
        cin >> A >> D >> L;
        battle -= A + D;
        battle -= (!(L & 1)) ? 2*B : 0;
        if (battle == 0) cout << "Empate\n";
        else if (battle > 0) cout << "Dabriel\n";
        else cout << "Guarte\n";
    }
    
    return 0;
}