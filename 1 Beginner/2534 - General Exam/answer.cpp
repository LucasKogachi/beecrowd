#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Nth[100], Q, p;
    
    while (cin >> N) {
        cin >> Q;
        for (int i = 0; i < N; i++) cin >> Nth[i];
        sort(Nth, Nth + N);
        for (int i = 0; i < Q; i++) {
            cin >> p;
            cout << Nth[N-p] << "\n";
        }
    }
    
    return 0;
}