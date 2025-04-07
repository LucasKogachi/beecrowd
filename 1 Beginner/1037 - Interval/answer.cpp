#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double N;
    double err = 0.000000001; // error

    cin >> N;
    if (0 - err < N && N < 25 + err) cout << "Intervalo [0,25]\n";
    else if (25 < N && N < 50 + err) cout << "Intervalo (25,50]\n";
    else if (50 < N && N < 75 + err) cout << "Intervalo (50,75]\n";
    else if (75 < N && N < 100 + err) cout << "Intervalo (75,100]\n";
    else cout << "Fora de intervalo\n";
    
    return 0;
}