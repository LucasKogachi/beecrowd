#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, aux, just, start;

    cin >> N;
    while (N > 0) {
        just = 0;
        aux = (pow(2, 2*N - 2) + 0.001); // max
        while (aux > 0) {
            aux = aux / 10;
            just++;
        }
        start = 1;
        for (int i = 0; i < N; i++) {
            aux = start;
            for (int j = 0; j < N-1; j++) {
                cout << setw(just) << aux << " ";
                aux *= 2;
            }
            cout << setw(just) << aux << "\n";
            start *= 2;
        }
        cout << "\n";
        cin >> N;
    }

    return 0;
}