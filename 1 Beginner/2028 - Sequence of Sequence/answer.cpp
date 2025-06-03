#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, numeros, caso = 1;
    
    while (cin >> N) {
        numeros = ((N + 1) * N) / 2 + 1;
        cout << "Caso " << caso << ": " << numeros << " numero";
        if (numeros > 1) cout << "s";
        cout << "\n0";
        for (int i = 1; i <= N; i++)
            for (int j = 0; j < i; j++)
                cout << " " << i ;
        cout << "\n\n";
        caso++;
    }
    
    return 0;
}