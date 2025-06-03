#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    double A, B, R;
    
    cin >> n;
    A = (1 + sqrt(5)) / 2;
    B = (1 - sqrt(5)) / 2;
    R = (pow(A, n) - pow(B, n)) / sqrt(5);
    cout << fixed << setprecision(1);
    cout << R << "\n";
    
    return 0;
}