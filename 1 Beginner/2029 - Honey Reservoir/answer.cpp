#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double V, D, area, pi = 3.14;
    
    cout << fixed << setprecision(2);
    while (cin >> V) {
        cin >> D;
        area = pi * (D/2)*(D/2);
        cout << "ALTURA = " << V / area << "\n";
        cout << "AREA = " << area << "\n";
    }
    
    return 0;
}