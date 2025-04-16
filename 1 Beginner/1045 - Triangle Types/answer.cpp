#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double v[3];
    double err = 0.00001; //error

    cin >> v[0] >> v[1] >> v[2];
    sort(v, v+3);
    if (v[0] + v[1] < v[2] + err) {
        cout << "NAO FORMA TRIANGULO\n";
        return 0;
    }
    
    if (v[0]*v[0] + v[1]*v[1] > v[2]*v[2] - err && v[0]*v[0] + v[1]*v[1] < v[2]*v[2] + err)
        cout << "TRIANGULO RETANGULO\n";
    else if (v[0]*v[0] + v[1]*v[1] < v[2]*v[2])
        cout << "TRIANGULO OBTUSANGULO\n";
    else
        cout << "TRIANGULO ACUTANGULO\n";
    
    if ((v[2]-err < v[1] && v[1] < v[2]+err) || (v[1]-err < v[0] && v[0] < v[1]+err)) {
        if ((v[2]-err < v[1] && v[1] < v[2]+err) && (v[1]-err < v[0] && v[0] < v[1]+err))
            cout << "TRIANGULO EQUILATERO\n";
        else
            cout << "TRIANGULO ISOSCELES\n";
    }
    
    return 0;
}