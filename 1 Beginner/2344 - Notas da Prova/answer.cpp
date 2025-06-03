#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    
    cin >> N;
    if (N < 1) cout << "E\n";
    else if (N < 36) cout << "D\n";
    else if (N < 61) cout << "C\n";
    else if (N < 86) cout << "B\n";
    else cout << "A\n";
    
    return 0;
}