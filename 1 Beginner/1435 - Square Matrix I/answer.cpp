#include <bits/stdc++.h>
using namespace std;

int distance(int i, int j, int N);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, i, j;

    cin >> N;
    while (N > 0) {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N-1; j++) {
                cout << setw(3) << distance(i, j, N) << " ";
            }
            cout << setw(3) << "1" << "\n";
        }
        cout << "\n";
        cin >> N;
    }

    return 0;
}

int distance(int i, int j, int N) {
    int menor = i;
    if (j < menor) menor = j;
    if (N-1-i < menor) menor = N-1-i;
    if (N-1-j < menor) menor = N-1-j;
    return menor+1;
}