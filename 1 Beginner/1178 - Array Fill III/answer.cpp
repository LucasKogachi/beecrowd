#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double N[100], X;

    cin >> X;
    cout << fixed << setprecision(4);
    for (int i = 0; i < 100; i++) {
        N[0] = X;
        cout << "N[" << i << "] = " << X << "\n";
        X /= 2.0;
    }
    
    return 0;
}