#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, i;
    string L;
    
    while (cin >> L) {
        cin >> N;
        for (int j = 0; j < N; j++) {
            cin >> i;
            cout << L[i-1];
        }
        cout << "\n";
    }
    
    return 0;
}