#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int C;
    string word;

    cin >> C;
    cout << fixed << setprecision(2);
    for (int i = 0; i < C; i++) {
        cin >> word;
        cout << word.length() * 0.01 << "\n";
    }
    
    return 0;
}