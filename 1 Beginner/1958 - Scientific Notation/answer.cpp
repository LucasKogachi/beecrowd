#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double V;
    
    cin >> V;
    if (!signbit(V)) cout << "+";
    cout << scientific << setprecision(4);
    cout << uppercase << V << "\n";

    return 0;
}