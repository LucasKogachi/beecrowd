#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, par = 0;
    string S;

    cin >> S;
    for (int i = 0; i < S.length(); i++)
        if (S[i] == '1') par++;
    par = par & 1;
    cout << S << par << "\n";
    
    return 0;
}