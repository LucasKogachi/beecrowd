#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int j, i;
    for (i = 1; i <= 9; i+=2)
        for (j = 7; j >= 5; j--)
            cout << "I=" << i << " J=" << j << "\n";
    
    return 0;
}