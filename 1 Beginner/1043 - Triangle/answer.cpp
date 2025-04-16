#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double A, B, C;
    double err = 0.00001; //error
    
    cin >> A >> B >> C;
    cout << fixed << setprecision(1);
    if (A + B > C + err && A + C > B + err && B + C > A + err)
        cout << "Perimetro = " << A + B + C << "\n";
    else
        cout << "Area = " << (A + B) * C / 2 << "\n";
    
    return 0;
}