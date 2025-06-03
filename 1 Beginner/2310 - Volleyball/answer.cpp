#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, S, B, A;
    int X[3] = {0, 0, 0};
    int T[3] = {0, 0, 0};
    string name;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> name >> S >> B >> A;
        T[0] += S; T[1] += B; T[2] += A;
        cin >> S >> B >> A;
        X[0] += S; X[1] += B; X[2] += A;
    }
    cout << fixed << setprecision(2);
    cout << "Pontos de Saque: "    << (100.0*X[0])/T[0] << " %.\n";
    cout << "Pontos de Bloqueio: " << (100.0*X[1])/T[1] << " %.\n";
    cout << "Pontos de Ataque: "   << (100.0*X[2])/T[2] << " %.\n";
    
    return 0;
}