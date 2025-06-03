#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N;
    
    cin >> T;
    while (T) {
        for (int i = 0; i < T; i++) {
            cin >> N;
            if (N & 1) cout << 2*(N-1) + 1;
            else cout << 2*(N-1);
            cout << "\n" ;
        }
        cin >> T;
    }
    
    return 0;
}