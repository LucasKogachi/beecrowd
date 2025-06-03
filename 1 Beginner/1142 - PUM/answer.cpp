#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;
    for (int i = 0; i < N; i++)
        cout << 4*i+1 << " " << 4*i+2 << " " << 4*i+3 << " PUM\n";
    
    return 0;
}