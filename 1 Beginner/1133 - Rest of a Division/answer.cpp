#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y;
    int start, end;

    cin >> X >> Y;
    if (X < Y) {
        start = X;
        end = Y;
    } else {
        start = Y;
        end = X;
    }
    for (int i = start + 1; i < end; i++)
        if (i % 5 == 2 || i % 5 == 3)
            cout << i << "\n";
    
    return 0;
}