#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;
    for (int i = 1; i <= N; i++)
        if (N % i == 0)
            cout << i << "\n";
    
    return 0;
}