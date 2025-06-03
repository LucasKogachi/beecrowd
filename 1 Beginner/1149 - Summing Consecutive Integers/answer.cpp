#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, N;
    
    cin >> A >> N;
    while (N <= 0)
        cin >> N;
    cout << ((2*A + N - 1) * N) / 2 << "\n";
    
    return 0;
}