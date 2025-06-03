#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int V[3];

    cin >> V[0] >> V[1] >> V[2];
    sort(V, V+3);
    
    if (V[0] + V[1] <= V[2]) {
        cout << "Invalido\n";
        return 0;
    }

    if (V[0] == V[1] && V[1] == V[2])
        cout << "Valido-Equilatero\n";
    else if (V[0] == V[1] || V[1] == V[2])
        cout << "Valido-Isoceles\n";
    else cout << "Valido-Escaleno\n";
    
    if (V[0]*V[0] + V[1]*V[1] == V[2]*V[2])
        cout << "Retangulo: S\n";
    else cout << "Retangulo: N\n";
    
    return 0;
}