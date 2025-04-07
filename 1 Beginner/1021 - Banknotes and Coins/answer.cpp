#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double N, err = 0.001; // error
    int n, i, m, qde;
    int NOTAS[] = {100, 50, 20, 10, 5, 2};
    double MOEDAS[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    
    cin >> N;
    N += err;
    n = (int) (100 * N);
    cout << "NOTAS:\n";
    for (i = 0; i < 6; i++) {
        m = 100 * NOTAS[i];
        qde = n / m;
        n -= qde * m;
        cout << qde << " nota(s) de R$ " << NOTAS[i] << ".00\n";
    }
    cout << "MOEDAS:\n";
    cout << fixed << setprecision(2);
    for (i = 0; i < 6; i++) {
        m = (int) (100 * (MOEDAS[i] + err));
        qde = n / m;
        n -= qde * m;
        cout << qde << " moeda(s) de R$ " << MOEDAS[i] << "\n";
    }
    
    return 0;
}