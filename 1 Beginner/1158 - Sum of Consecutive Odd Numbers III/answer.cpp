#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X, Y;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> X >> Y;
        if(!(X & 1)) X++;
        cout << ((2*X + 2*Y - 2) * Y) / 2 << "\n";
    }
    
    return 0;
}