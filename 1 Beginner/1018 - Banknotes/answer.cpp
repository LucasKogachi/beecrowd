#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int notas, N;
    int banknotes[] = {100, 50, 20, 10, 5, 2, 1};
    
    cin >> N;
    cout << N << "\n";
    for (int i = 0; i < 7; i++) {
        notas = N / banknotes[i];
        N = N % banknotes[i];
        cout << notas << " nota(s) de R$ " << banknotes[i] << ",00\n";
    }
    
    return 0;
}