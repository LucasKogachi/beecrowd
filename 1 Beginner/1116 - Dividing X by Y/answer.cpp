#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X, Y;

    cin >> N;
    cout << fixed << setprecision(1);
    for (int i = 0; i < N; i++) {
        cin >> X >> Y;
        if (Y == 0) cout << "divisao impossivel\n";
        else cout << ((double) X) / Y << "\n";
    }
    
    return 0;
}