#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, block;
    bool CAM[101][101];
    
    cin >> N;
    for (int i = 0; i < N+1; i++)
        for (int j = 0; j < N+1; j++)
            cin >> CAM[i][j];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            block = CAM[i][j] + CAM[i][j+1] + CAM[i+1][j] + CAM[i+1][j+1];
            if (block > 1) cout << "S";
            else cout << "U";
        }
        cout << "\n";
    }
    
    return 0;
}