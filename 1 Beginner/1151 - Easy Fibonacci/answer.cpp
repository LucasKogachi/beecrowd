#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, f1 = 0, f2 = 1, aux;

    cin >> N;
    if (N > 1) cout << f1 << " ";
    if (N > 2) cout << f2 << " ";
    for (int i = 3; i < N; i++) {
        aux = f1 + f2;
        cout << aux << " ";
        f1 = f2;
        f2 = aux;
    }
    cout << f1 + f2 << "\n";
    
    return 0;
}