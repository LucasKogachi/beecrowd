#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, min, max, A, riders;
    
    while (cin >> N) {
        cin >> min >> max;
        riders = 0;
        for (int i = 0; i < N; i++) {
            cin >> A;
            if (min <= A && A <= max) riders++;
        }
        cout << riders << "\n";
    }

    return 0;
}