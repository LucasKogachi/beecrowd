#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Xf, Yf, Xi, Yi, Vi, R1, R2;
    double distance, err = 0.000001;
    
    while (cin >> Xf) {
        cin >> Yf >> Xi >> Yi >> Vi >> R1 >> R2;
        distance = sqrt(pow(Xf-Xi, 2) + pow(Yf-Yi, 2));
        distance += 1.5 * Vi;
        distance -= R1 + R2 + err;
        if (distance < 0) cout << "Y\n";
        else cout << "N\n";
    }
    
    return 0;
}