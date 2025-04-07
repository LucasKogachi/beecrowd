#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double x, y;
    double err = 0.00001; //error

    cin >> x >> y;
    if (0 - err < x && x < 0 + err) {
        if (0 - err < y && y < 0 + err) cout << "Origem\n";
        else cout << "Eixo Y\n";
    } else {
        if (0 - err < y && y < 0 + err) cout << "Eixo X\n";
        else if (x > 0 && y > 0) cout << "Q1\n";
        else if (x < 0 && y > 0) cout << "Q2\n";
        else if (x < 0 && y < 0) cout << "Q3\n";
        else cout << "Q4\n";
    }
    
    return 0;
}