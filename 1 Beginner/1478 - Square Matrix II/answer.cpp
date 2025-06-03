#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, i, j;

    cin >> N;
    while (N > 0) {
        for (i = 0; i < N; i++) {
            for (j = 1+i; j > 1; j--)
                cout << setw(3) << j << " ";
            for (j = 1; j < N-i; j++)
                cout << setw(3) << j << " ";
            cout << setw(3) << N-i << "\n";
        }
        cout << "\n";
        cin >> N;
    }

    return 0;
}