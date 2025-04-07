#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y;
    double prices[] = {4.0, 4.5, 5.0, 2.0, 1.5};

    cin >> X >> Y;
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << Y * prices[X-1] << "\n";
    
    return 0;
}