#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double salario, ganho;
    int percentual;
    double err = 0.00001; // error

    cin >> salario;
    if (salario < 400 + err) {
        ganho = 0.15 * salario;
        percentual = 15;
    } else if (salario < 800 + err) {
        ganho = 0.12 * salario;
        percentual = 12;
    } else if (salario < 1200 + err) {
        ganho = 0.1 * salario;
        percentual = 10;
    } else if (salario < 2000 + err) {
        ganho = 0.07 * salario;
        percentual = 7;
    } else {
        ganho = 0.04 * salario;
        percentual = 4;
    }
    salario += ganho;
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << salario << "\n";
    cout << "Reajuste ganho: " << ganho << "\n";
    cout << "Em percentual: " << percentual << " %\n";
    
    return 0;
}