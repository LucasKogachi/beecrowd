#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count = 0;

    for (int i = 0; i < 5; i++) {
        cin >> n;
        if (!(n & 1))
            count++;
    }
    cout << count << " valores pares\n";
    
    return 0;
}