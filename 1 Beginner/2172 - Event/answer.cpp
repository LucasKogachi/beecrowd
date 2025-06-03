#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    int64_t M;

    cin >> X >> M;
    while (X || M) {
        cout << X * M << "\n";
        cin >> X >> M;
    }
    
    return 0;
}