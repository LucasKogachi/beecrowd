#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double S = 1, den = 2.0;
    
    for (int i = 3; i <= 39; i+=2) {
        S += i / den;
        den *= 2;
    }
    cout << fixed << setprecision(2);
    cout << S << "\n";
    
    return 0;
}