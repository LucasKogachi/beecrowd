#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, i, j;
    int v[102][102] = {};

    while (cin >> N) {
        cin >> M;
        for (i = 1; i <= N; i++) v[i][M+1] = 0;
        for (j = 1; j <= M; j++) v[N+1][j] = 0;
        for (i = 1; i <= N; i++)
            for (j = 1; j <= M; j++)
                cin >> v[i][j];
        for (i = 1; i <= N; i++) {
            for (j = 1; j <= M; j++) {
                if (v[i][j] == 1) cout << "9";
                else cout << v[i-1][j] + v[i+1][j] + v[i][j-1] + v[i][j+1];
            }
            cout << "\n";
        }
    }

    return 0;
}