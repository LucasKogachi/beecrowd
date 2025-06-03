#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, L, A, i, j;
    int CM[100][100], CL[100][100];
    
    while (cin >> N) {
        cin >> M >> L;
        for (i = 0; i < M; i++)
            for (j = 0; j < N; j++)
                cin >> CM[i][j];
        for (i = 0; i < L; i++)
            for (j = 0; j < N; j++)
                cin >> CL[i][j];
        cin >> M >> L >> A;
        if (CM[M-1][A-1] == CL[L-1][A-1]) cout << "Empate\n";
        else if (CM[M-1][A-1] > CL[L-1][A-1]) cout << "Marcos\n";
        else cout << "Leonardo\n";
    }
    
    return 0;
}