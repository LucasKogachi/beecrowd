#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int V[3];
    
    cin >> V[0] >> V[1] >> V[2];
    sort(V, V+3);
    if (V[0] == V[1] || V[1] == V[2]) cout << "S\n";
    else if (V[0] + V[1] == V[2]) cout << "S\n";
    else cout << "N\n";
    
    return 0;
}