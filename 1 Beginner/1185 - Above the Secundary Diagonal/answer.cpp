#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string O;
    double M[12][12], soma = 0;

    cin >> O;
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
            if (i + j < 11) soma += M[i][j];
        }
    cout << fixed << setprecision(1);
    if (O == "S") cout << soma << "\n";
    else cout << soma / 66 << "\n";
    
    return 0;
}