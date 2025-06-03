#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, change, bills;
    
    cin >> N >> M;
    while (N || M) {
        change = M - N;
        bills = 0;
        if (change >= 100) {
            bills++;
            change -= 100;
        }
        if (change >= 50) {
            bills++;
            change -= 50;
        }
        if (change >= 20) {
            bills++;
            change -= 20;
        }
        if (change >= 10) {
            bills++;
            change -= 10;
        }
        if (change >= 5) {
            bills++;
            change -= 5;
        }
        if (change >= 2) {
            bills++;
            change -= 2;
        }
        if (bills == 2) cout << "possible\n";
        else cout << "impossible\n";
        cin >> N >> M;
    }
    
    return 0;
}