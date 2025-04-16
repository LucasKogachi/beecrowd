#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v[3];
    int i[3];

    cin >> v[0] >> v[1] >> v[2];
    i[0] = v[0]; i[1] = v[1]; i[2] = v[2];
    sort(v, v+3);
    cout << v[0] << "\n" << v[1] << "\n" << v[2] << "\n\n";
    cout << i[0] << "\n" << i[1] << "\n" << i[2] << "\n";
    
    return 0;
}