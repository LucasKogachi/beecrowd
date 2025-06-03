#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, menor, pos = 0;

    cin >> N;
    vector<int> X(N);

    cin >> X[0];
    menor = X[0];
    for (int i = 1; i < N; i++) {
        cin >> X[i];
        if (X[i] < menor) {
            menor = X[i];
            pos = i;
        }
    }
    cout << "Menor valor: " << menor << "\n";
    cout << "Posicao: " << pos << "\n";
    
    return 0;
}