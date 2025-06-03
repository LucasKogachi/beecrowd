#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;

    cin >> X;
    while (X != 0) {
        if (X & 1) X++;
        cout << ((2*X + 8) * 5) / 2 << "\n";
        cin >> X;
    }
    
    return 0;
}