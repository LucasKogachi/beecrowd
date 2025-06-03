#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N, C;
    double num, den;
    
    cout << fixed << setprecision(4);
    while (cin >> M) {
        num = 0;
        den = 0;
        for (int i = 0; i < M; i++) {
            cin >> N >> C;
            num += N * C;
            den += C;
        }
        cout << num / (100 * den) << "\n";
    }
    
    return 0;
}