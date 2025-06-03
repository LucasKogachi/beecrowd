#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Z, N;
    double bhask;

    cin >> X >> Z;
    while (Z <= X)
        cin >> Z;
    bhask = 2*X - 1; // b
    bhask = (-bhask + sqrt(bhask*bhask + 8*Z))/2 + 1;
    N = bhask;
    cout << N << "\n";
    
    return 0;
}