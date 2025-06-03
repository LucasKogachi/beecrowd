#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int alcool = 0, gasolina = 0, diesel = 0;
    int X;

    do {
        cin >> X;
        if (X == 1) alcool++;
        else if (X == 2) gasolina++;
        else if (X == 3) diesel++;
    } while (X != 4);
    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << alcool << "\n";
    cout << "Gasolina: " << gasolina << "\n";
    cout << "Diesel: " << diesel << "\n";
    
    return 0;
}