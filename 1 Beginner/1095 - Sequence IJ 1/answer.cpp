#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int j, i;

    for (i=1,j=60; j >= 0; i+=3,j-=5)
        cout << "I=" << i << " J=" << j << "\n";
    
    return 0;
}