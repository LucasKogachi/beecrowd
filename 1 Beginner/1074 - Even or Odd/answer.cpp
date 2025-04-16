#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X;

    cin >> N;
    for (int i = 0; i < N; i++) {

        cin >> X;

        if (X == 0) cout << "NULL\n";
        else if (X & 1) cout << "ODD ";
        else cout << "EVEN ";
        
        if (X > 0) cout << "POSITIVE\n";
        else if (X < 0) cout << "NEGATIVE\n";
    }
    
    return 0;
}