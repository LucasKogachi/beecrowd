#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N[10], V, X;

    cin >> V;
    X = V;
    for (int i = 0; i < 10; i++) {
        N[i] = X;
        cout << "N[" << i << "] = " << N[i] << "\n";
        X *= 2;
    }
    
    return 0;
}