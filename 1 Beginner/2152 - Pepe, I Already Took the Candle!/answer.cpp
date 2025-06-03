#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, H, M, O;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> H >> M >> O;
        cout << setw(2) << setfill('0') << H << ":";
        cout << setw(2) << M;
        if(O) cout << " - A porta abriu!\n";
        else cout << " - A porta fechou!\n";
    }
    
    return 0;
}