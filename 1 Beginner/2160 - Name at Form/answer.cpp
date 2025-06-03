#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string L;

    getline(cin, L);
    if (L.length() > 80) cout << "NO\n";
    else cout << "YES\n";
    
    return 0;
}