#include <bits/stdc++.h>
using namespace std;

const double pi = 3.14159;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double A, B, C;

    cin >> A >> B >> C;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << A * C / 2 << "\n";
    cout << "CIRCULO: "   << pi * C * C << "\n";
    cout << "TRAPEZIO: "  << (A + B) * C / 2 << "\n";
    cout << "QUADRADO: "  << B * B << "\n";
    cout << "RETANGULO: " << A * B << "\n";
    
    return 0;
}