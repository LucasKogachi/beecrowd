#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;

    cin >> X;
    if (!(X & 1)) X++;
    for (int i = 0; i < 6; i++)
        cout << X + 2*i << "\n";
    
    return 0;
}