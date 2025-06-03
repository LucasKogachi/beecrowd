#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int C, N;

    cin >> C;
    for (int i = 0; i < C; i++) {
        cin >> N;
        cout << (N & 1) << "\n";
    }

    return 0;
}