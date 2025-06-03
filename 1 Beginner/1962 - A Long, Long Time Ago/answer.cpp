#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, T;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> T;
        if (T >= 2015) cout << T - 2015 + 1 << " A.C.\n";
        else cout << 2015 - T << " D.C.\n";
    }
    
    return 0;
}