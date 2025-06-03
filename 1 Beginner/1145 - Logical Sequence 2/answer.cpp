#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y;

    cin >> X >> Y;
    for (int i = 1; i <= Y; i++) {
        cout << i;
        if (i % X != 0) cout << " ";
        else cout << "\n";
    }
    
    return 0;
}