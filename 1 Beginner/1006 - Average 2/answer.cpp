#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double A, B, C;
    double media;

    cin >> A >> B >> C;
    media = (2 * A + 3 * B + 5 * C) / 10;
    cout << "MEDIA = " << fixed << setprecision(1) << media << "\n";
    
    return 0;
}