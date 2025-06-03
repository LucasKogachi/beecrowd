#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, T[1000][1000];
    int X = 0, Y = 0;

    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> T[i][j];
    for (int i = 1; i < N-1; i++) {
        for (int j = 1; j < M-1; j++) {
            if (T[i][j] == 42 && T[i-1][j-1] == 7 && T[i-1][j] == 7 &&
                T[i-1][j+1] == 7 && T[i][j+1] == 7 && T[i+1][j+1] == 7 &&
                T[i+1][j] == 7 && T[i+1][j-1] == 7 && T[i][j-1] == 7) {
                    X = i+1; Y = j+1; break;
            }
        }
        if (X) break;
    }
    cout << X << " " << Y << "\n";
    
    return 0;
}