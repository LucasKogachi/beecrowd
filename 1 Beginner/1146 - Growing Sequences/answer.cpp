#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, i;
    
    cin >> X;
    while (X != 0) {
        for (i = 1; i < X; i++)
            cout << i << " ";
        cout << i << "\n";
        cin >> X;
    }
    
    return 0;
}