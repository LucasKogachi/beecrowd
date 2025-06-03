#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long P;
    char C[25];
    
    cin >> C;
    while (strcmp(C, "-1")) {
        if (C[0] == '0') cout << "0\n";
        else {
            P = stoull(C);
            cout << P-1 << "\n";
        }
        cin >> C;
    }
    
    return 0;
}