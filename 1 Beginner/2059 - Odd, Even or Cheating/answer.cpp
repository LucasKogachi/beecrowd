#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p, j1, j2, r, a;
    
    cin >> p >> j1 >> j2 >> r >> a;
    if (r == 1) {
        if (a == 1) cout << "Jogador 2 ganha!";
        else cout << "Jogador 1 ganha!";
    } else if (a == 1) cout << "Jogador 1 ganha!";
    else {
        if ((j1+j2+p) & 1) cout << "Jogador 1 ganha!";
        else cout << "Jogador 2 ganha!";
    }
    cout << "\n";
    
    return 0;
}