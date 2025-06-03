#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, soma = -3;
    
    for (int i = 0; i < 4; i++) {
        cin >> T;
        soma += T;
    }
    cout << soma << "\n";

    return 0;
}