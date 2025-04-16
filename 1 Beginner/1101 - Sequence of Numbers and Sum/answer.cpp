#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N, aux;

    cin >> M >> N;
    while (M > 0 && N > 0) {
        if (M > N) {
            aux = N;
            N = M;
            M = aux;
        }
        for (int i = M; i <= N; i++)
            cout << i << " ";
        cout << "Sum=" << ((M + N) * (N - M + 1)) / 2 << "\n";
        cin >> M >> N;
    }
    
    return 0;
}