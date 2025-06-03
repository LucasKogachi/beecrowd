#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char N1[15], N2[40];
    char *match, *last;
    int qtd, i = 1;
    
    while (cin >> N1) {
        cin >> N2;
        cout << "Caso #" << i << ":\n";
        qtd = 0;
        match = strstr(N2, N1);
        while (match) {
            qtd++;
            last = match;
            match++;
            match = strstr(match, N1);
        }
        if (qtd) {
            cout << "Qtd.Subsequencias: " << qtd << "\n";
            cout << "Pos: " << strlen(N2) - strlen(last) + 1;
        } else cout << "Nao existe subsequencia";
        cout << "\n\n" ;
        i++;
    }
    
    return 0;
}