#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int P, N, left, right;
    string outcome;

    outcome = "YOU WIN";
    cin >> P >> N >> left;
    for (int i = 1; i < N; i++) {
        cin >> right;
        if (abs(left - right) > P) outcome = "GAME OVER";
        left = right;
    }
    cout << outcome << "\n";
    
    return 0;
}