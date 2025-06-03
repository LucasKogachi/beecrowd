#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int64_t soma = 0;
    int N, X, attacked = 0, stolen = 0, richFarm = 0;
    bool end = false;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> X;
        soma += X;
        if (!end) {
            if (X & 1) { // odd
                stolen++;
                attacked++;
                if (X > 1) richFarm++; // > 1x sheep
            } else {
                if (X > 0) {
                    stolen++;
                    attacked++;
                }
                stolen += richFarm;
                end = true;
            }
        }
    }
    cout << attacked << " " << soma - stolen << "\n";
    
    return 0;
}