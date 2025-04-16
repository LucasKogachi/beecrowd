#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, high, pos = 1;

    cin >> high;
    for (int i = 2; i <= 100; i++) {
        cin >> x;
        if (x > high) {
            high = x;
            pos = i;
        }
    }
    cout << high << "\n" << pos << "\n";
    
    return 0;
}