#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    double fractions = 0;

    cin >> N;
    cout << fixed << setprecision(10);
    for (int i = 0; i < N; i++) {
        fractions += 2;
        fractions = 1/fractions;
    }
    cout << 1 + fractions << "\n";
    
    return 0;
}