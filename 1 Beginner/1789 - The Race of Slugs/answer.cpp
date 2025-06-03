#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int L, V, max;
    
    while (cin >> L) {
        max = 9;
        for (int i = 0; i < L; i++) {
            cin >> V;
            if (V > max) max = V;
        }
        if (max < 10) cout << "1\n";
        else if (max < 20) cout << "2\n";
        else cout << "3\n";
    }

    return 0;
}