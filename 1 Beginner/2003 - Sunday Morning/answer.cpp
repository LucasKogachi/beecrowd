#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    char H[10];
    
    while (cin >> H) {
        H[1] = '\0';
        m = 60 * atoi(H) + atoi(H+2) + 60;
        m -= 8 * 60;
        if (m < 0) m = 0;
        cout << "Atraso maximo: " << m << "\n";
    }
    
    return 0;
}