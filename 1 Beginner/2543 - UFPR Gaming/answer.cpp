#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, ID, i, j, cont;

    while (cin >> N) {
        cin >> ID;
        cont = 0;
        for (int k = 0; k < N; k++) {
            cin >> i >> j;
            if (ID == i && j == 0) cont++;
        }
        cout << cont << "\n";
    }
    
    return 0;
}