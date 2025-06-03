#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N[1000], T;

    cin >> T;
    for (int i = 0; i < 1000; i++) {
        N[i] = i % T;
        cout << "N[" << i << "] = " << N[i] << "\n";
    }
    
    return 0;
}