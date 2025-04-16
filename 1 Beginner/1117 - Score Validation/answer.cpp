#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double X, Y;
    double err = 0.0001;
    
    cin >> X;
    while (X < 0 - err || X > 10 + err) {
        cout << "nota invalida\n";
        cin >> X;
    }
    cin >> Y;
    while (Y < 0 - err || Y > 10 + err) {
        cout << "nota invalida\n";
        cin >> Y;
    }
    cout << fixed << setprecision(2);
    cout << "media = " << (X + Y) / 2 << "\n";
    
    return 0;
}