#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int C, N;
    string name;

    cin >> C;
    for (int i = 0; i < C; i++) {
        cin >> name >> N;
        if (name == "Thor") cout << "Y\n";
        else cout << "N\n";
    }

    return 0;
}