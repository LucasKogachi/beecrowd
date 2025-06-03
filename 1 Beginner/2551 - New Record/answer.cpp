#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, T, Tmax, D, Dmax;

    while (cin >> N) {
        cin >> Tmax >> Dmax;
        cout << "1\n";
        for (int i = 2; i <= N; i++) {
            cin >> T >> D;
            if (Tmax * D > T * Dmax) { // D/T > Dmax/Tmax, multiplying is faster
                Tmax = T;
                Dmax = D;
                cout << i << "\n";
            }
        }
    }

    return 0;
}