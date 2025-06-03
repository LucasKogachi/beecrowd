#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N;
    uint64_t Fib[61];
    
    Fib[0] = 0;
    Fib[1] = 1;
    for (int i = 2; i < 61; i++)
        Fib[i] = Fib[i-1] + Fib[i-2];
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        cout << "Fib(" << N << ") = " << Fib[N] << "\n";
    }
    
    return 0;
}