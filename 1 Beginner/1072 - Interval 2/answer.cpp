#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X, interval = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> X;
        if (10 <= X && X <= 20) interval++;
    }
    cout << interval << " in\n";
    cout << N - interval << " out\n";
    
    return 0;
}