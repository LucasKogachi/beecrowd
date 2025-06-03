#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int V[4];

    for (int i = 0; i < 4; i++)
        cin >> V[i];
    sort(V, V+4);
    if (V[0] + V[1] > V[2] || V[1] + V[2] > V[3]) cout << "S\n";
    else cout << "N\n";

    return 0;
}