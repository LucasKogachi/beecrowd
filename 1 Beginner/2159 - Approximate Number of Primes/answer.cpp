#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    double down, up;
    
    cin >> n;
    down = n / log(n);
    up = 1.25506 * n / log(n);
    cout << fixed << setprecision(1);
    cout << down << " " << up << "\n";
    
    return 0;
}