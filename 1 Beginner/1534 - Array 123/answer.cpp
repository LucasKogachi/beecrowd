#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, i, j;

    while (cin >> N) {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++)
                if (i+j == N-1) cout << 2;
                else if (i == j) cout << 1;
                else cout << 3;
            cout << "\n";
        }
    }

    return 0;
}