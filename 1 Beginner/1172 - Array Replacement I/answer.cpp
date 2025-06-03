#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X[10];

    for (int i = 0; i < 10; i++) {
        cin >> X[i];
        if (X[i] <= 0) X[i] = 1;
        cout << "X[" << i << "] = " << X[i] << "\n";
    }
    
    return 0;
}