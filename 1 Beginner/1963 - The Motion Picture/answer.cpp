#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double A, B;

    cin >> A >> B;
    cout << fixed << setprecision(2);
    cout << 100 * (B / A - 1) << "%\n";
    
    return 0;
}