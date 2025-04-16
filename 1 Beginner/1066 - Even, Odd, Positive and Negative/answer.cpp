#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, odd = 0, pos = 0, neg = 0;
    
    for (int i = 0; i < 5; i++) {
        cin >> n;
        if (n > 0) pos++;
        else if (n < 0) neg++;
        
        if (n & 1) odd++;
    }
    cout << 5 - odd << " valor(es) par(es)\n";
    cout << odd << " valor(es) impar(es)\n";
    cout << pos << " valor(es) positivo(s)\n";
    cout << neg << " valor(es) negativo(s)\n";
    
    return 0;
}