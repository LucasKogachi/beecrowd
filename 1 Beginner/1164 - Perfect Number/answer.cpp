#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X, soma;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> X;
        soma = 0;
        for (int j = 1; j < X; j++) {
            if (X % j == 0) soma += j;
        }
        cout << X;
        if (soma != X) cout << " nao";
        cout << " eh perfeito\n";
    }
    
    return 0;
}