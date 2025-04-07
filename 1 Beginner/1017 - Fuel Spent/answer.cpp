#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int time, speed;
    double L = 12.0;

    cin >> time >> speed;
    cout << fixed << setprecision(3);
    cout << time * speed / L << "\n";
    
    return 0;
}