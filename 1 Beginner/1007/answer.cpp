#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, C, D;
    int DIFERENCA;

    cin >> A >> B >> C >> D;
    DIFERENCA = A * B - C * D;
    cout << "DIFERENCA = " << DIFERENCA << "\n";
    
    return 0;
}