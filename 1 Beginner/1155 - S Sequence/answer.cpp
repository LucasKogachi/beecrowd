#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double S = 0;

    for (int i = 1; i <= 100; i++)
        S += 1.0 / i;
    cout << fixed << setprecision(2);
    cout << S << "\n";
    
    return 0;
}