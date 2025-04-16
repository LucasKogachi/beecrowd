#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int password;

    cin >> password;
    while (password != 2002) {
        cout << "Senha Invalida\n";
        cin >> password;
    }
    cout << "Acesso Permitido\n";
    
    return 0;
}