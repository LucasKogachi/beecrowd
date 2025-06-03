#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N[20], Y;

    for (int i = 0; i < 20; i++) {
        cin >> Y;
        N[i] = Y;
    }
    for (int i = 0; i < 10; i++) {
        Y = N[19-i];
        N[19-i] = N[i];
        N[i] = Y;
    }
    for (int i = 0; i < 20; i++)
        cout << "N[" << i << "] = " << N[i] << "\n";
    
    return 0;
}