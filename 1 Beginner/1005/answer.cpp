#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double A, B;

    cin >> A >> B;
    cout << "MEDIA = " << fixed << setprecision(5) << (3.5 * A + 7.5 * B) / 11 << "\n";
    
    return 0;
}