#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, v;
    double num, error = 0.00001;

    while (cin >> N) {
        num = 0;
        for (int i = 0; i < N; i++) {
            cin >> v;
            if (v) num += 1;
        }
        if (num/N > 2.0/3 - error) cout << "impeachment\n";
        else cout << "acusacao arquivada\n";
    }
    
    return 0;
}