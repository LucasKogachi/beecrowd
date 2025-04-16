#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, amount, C = 0, R = 0, S = 0, total = 0;
    string c;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> amount >> c;
        total += amount;
        if (c[0] == 'C') C += amount;
        else if (c[0] == 'R') R += amount;
        else S += amount;
    }
    cout << fixed << setprecision(2);
    cout << "Total: " << total << " cobaias\n";
    cout << "Total de coelhos: " << C << "\n";
    cout << "Total de ratos: " << R << "\n";
    cout << "Total de sapos: " << S << "\n";
    cout << "Percentual de coelhos: " << (100.0*C)/total << " %\n";
    cout << "Percentual de ratos: " << (100.0*R)/total << " %\n";
    cout << "Percentual de sapos: " << (100.0*S)/total << " %\n";
    
    return 0;
}