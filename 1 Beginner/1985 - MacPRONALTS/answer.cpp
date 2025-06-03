#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p, n, q;
    double soma = 0;
    double prices[5] = {1.5, 2.5, 3.5, 4.5, 5.5};

    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> n >> q;
        soma += q * prices[n-1001];
    }
    cout << fixed << setprecision(2);
    cout << soma << "\n";
    
    return 0;
}