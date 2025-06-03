#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, pos, X[2][2], p;
    
    while (cin >> N) {
        cin >> M;
        p = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> pos;
                if (pos != 0) {
                    X[p][0] = i;
                    X[p][1] = j;
                    p++;
                }
            }
        }
        cout << abs(X[0][0] - X[1][0]) + abs(X[0][1] - X[1][1]) << "\n";
    }
    
    return 0;
}