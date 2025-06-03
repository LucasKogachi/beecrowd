#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int S, T, F, dest;
    
    cin >> S >> T >> F;
    dest = S + T + F;
    if (dest < 0) dest += 24;
    cout << dest % 24 << "\n";
    
    return 0;
}