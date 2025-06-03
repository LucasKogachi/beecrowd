#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, fat = 1;

    cin >> N;
    for (int i = 2; i <= N; i++)
        fat *= i;
    cout << fat << "\n";
    
    return 0;
}