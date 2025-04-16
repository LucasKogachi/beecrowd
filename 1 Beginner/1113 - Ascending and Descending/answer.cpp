#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y;

    cin >> X >> Y;
    while (X != Y) {
        if (X > Y) cout << "Decrescente\n";
        else cout << "Crescente\n";
        cin >> X >> Y;
    }
    
    return 0;
}