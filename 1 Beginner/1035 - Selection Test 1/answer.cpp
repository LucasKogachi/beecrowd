#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, C, D;
    
    cin >> A >> B >> C >> D;
    if ((B > C) && (D > A) && (C + D > A + B) && (C > 0) && (D > 0) && !(A & 1))
        cout << "Valores aceitos\n";
    else
        cout << "Valores nao aceitos\n";
    
    return 0;
}