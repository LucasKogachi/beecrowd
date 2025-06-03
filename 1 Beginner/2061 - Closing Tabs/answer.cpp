#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    string action;

    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> action;
        if (action == "fechou") N++;
        else N--;
    }
    cout << N << "\n";
    
    return 0;
}