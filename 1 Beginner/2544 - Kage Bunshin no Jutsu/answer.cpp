#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, clones[21], i, j, k;
    
    j = 1;
    for (i = 0; i < 21; i++) {
        clones[i] = j;
        j *= 2;
    }
    while (cin >> N) {
        i = 0; k = 20;
        while (i <= k) {
            j = (i + k) / 2;
            if (clones[j] == N) break;
            else if (clones[j] < N) i = j+1;
            else k = j-1;
        }
        cout << j << "\n";
    }

    return 0;
}