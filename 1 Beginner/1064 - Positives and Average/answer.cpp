#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n, sum = 0;
    int count = 0;

    for (int i = 0; i < 6; i++) {
        cin >> n;
        if (n > 0) {
            sum += n;
            count++;
        }
    }
    cout << fixed << setprecision(1);
    cout << count << " valores positivos\n";
    cout << sum / count << "\n";
    
    return 0;
}