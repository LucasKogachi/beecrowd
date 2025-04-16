#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int DDD;
    string destination;

    cin >> DDD;
    switch (DDD) {
        case 11:
            destination = "Sao Paulo"; break;
        case 19:
            destination = "Campinas"; break;
        case 21:
            destination = "Rio de Janeiro"; break;
        case 27:
            destination = "Vitoria"; break;
        case 31:
            destination = "Belo Horizonte"; break;
        case 32:
            destination = "Juiz de Fora"; break;
        case 61:
            destination = "Brasilia"; break;
        case 71:
            destination = "Salvador"; break;
        default:
            destination = "DDD nao cadastrado";
    }
    cout << destination << "\n";
    
    return 0;
}