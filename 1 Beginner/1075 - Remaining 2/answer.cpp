#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;
    if (N < -2) N *= -1;
    if (N < 3) return 0;
    for (int i = 2; i <= 10000; i+=N)
        cout << i << "\n";
    
    return 0;
}