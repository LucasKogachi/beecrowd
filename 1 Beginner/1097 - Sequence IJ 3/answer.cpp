#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, j;

    for (i = 1; i <= 9; i+=2)
        for (j = i+6; j >= i+4; j--)
            cout << "I=" << i << " J=" << j << "\n";
    
    return 0;
}