#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double A, B;
    int X;
    double err = 0.0001;
    
    cout << fixed << setprecision(2);
    do {
        cin >> A;
        while (A < 0 - err || A > 10 + err) {
            cout << "nota invalida\n";
            cin >> A;
        }
        cin >> B;
        while (B < 0 - err || B > 10 + err) {
            cout << "nota invalida\n";
            cin >> B;
        }
        cout << "media = " << (A + B) / 2 << "\n";
        X = 0;
        while (X != 1 && X != 2) {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> X;
        }
    } while (X != 2);
    
    return 0;
}