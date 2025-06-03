#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, R, before, fall = 0;

    cin >> N >> before;
    for (int i = 1; i < N; i++) {
        cin >> R;
        if (before > R) {
            fall = i+1;
            break;
        }
        before = R;
    }
    cout << fall << "\n";
    
    return 0;
}