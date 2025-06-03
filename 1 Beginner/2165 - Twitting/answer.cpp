#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string T;

    getline(cin, T);
    if (T.length() > 140) cout << "MUTE\n";
    else cout << "TWEET\n";
    
    return 0;
}