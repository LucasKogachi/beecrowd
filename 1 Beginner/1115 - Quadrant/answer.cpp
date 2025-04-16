#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y;

    cin >> X >> Y;
    while (X != 0 && Y != 0) {
        if (X > 0) {
            if (Y > 0) cout << "primeiro\n";
            else cout << "quarto\n";
        } else {
            if (Y > 0) cout << "segundo\n";
            else cout << "terceiro\n";
        }
        cin >> X >> Y;
    }
    
    return 0;
}