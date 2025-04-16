#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n;
    int count = 0;

    for (int i; i < 6; i++) {
        cin >> n;
        if (n > 0) count++;
    }
    cout << count << " valores positivos\n";
    
    return 0;
}