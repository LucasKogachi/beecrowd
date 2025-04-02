#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n = 3.14159;
    double R;

    cin >> R;
    // cout << setprecision(n)          significant figures
    // cout << fixed << setprecision(n) decimal places
    cout << "A=" << fixed << setprecision(4) << n * R * R << "\n";
    
    return 0;
}