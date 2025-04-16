#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double i, j;
    double err = 0.0001;
    int x;

    for (i = 0; i <= 2.1; i+=0.2) {
        x = (i + err);
        if (i - x < 0.1) cout << fixed << setprecision(0);
        else cout << fixed << setprecision(1);
        for (j = i+1; j < i+3.1; j+=1)
            cout << "I=" << i << " J=" << j << "\n";
    }
    
    return 0;
}