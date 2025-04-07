#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double A, B, C;
    double delta;

    cin >> A >> B >> C;
    delta = B*B - 4*A*C;
    if (delta < 0.000001 || (-0.000001 < A && A < 0.000001)) {
        cout << "Impossivel calcular\n";
        return 0;
    }
    cout << fixed << setprecision(5);
    cout << "R1 = " << (-B + sqrt(delta)) / (2*A) << "\n";
    cout << "R2 = " << (-B - sqrt(delta)) / (2*A) << "\n";
    
    return 0;
}