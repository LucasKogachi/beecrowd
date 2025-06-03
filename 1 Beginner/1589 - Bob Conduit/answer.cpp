#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, R1, R2;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> R1 >> R2;
        cout << R1 + R2 << "\n";
    }

    return 0;
}