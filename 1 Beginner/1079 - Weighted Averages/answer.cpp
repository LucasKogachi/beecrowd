#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    double x, y, z;

    cin >> N;
    cout << fixed << setprecision(1);
    for (int i = 0; i < N; i++) {
        cin >> x >> y >> z;
        cout << (2*x + 3*y + 5*z) / 10 << "\n";
    }
    
    return 0;
}