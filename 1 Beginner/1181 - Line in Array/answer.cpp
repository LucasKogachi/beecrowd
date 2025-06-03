#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int L;
    string T;
    double M[12][12], soma = 0;

    cin >> L >> T;
    cout << fixed << setprecision(1);
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> M[i][j];
    for (int j = 0; j < 12; j++)
        soma += M[L][j];
    if (T == "S") cout << soma << "\n";
    else cout << soma / 12 << "\n";
    
    return 0;
}