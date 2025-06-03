#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int QT, N, M, p2_choice;
    string p1, p2, choice;

    cin >> QT;
    for (int i = 0; i < QT; i++) {
        cin >> p1 >> choice >> p2 >> choice;
        cin >> N >> M;
        p2_choice = (choice == "PAR") ? 0 : 1;
        if (((N + M) & 1) == p2_choice) cout << p2 << "\n";
        else cout << p1 << "\n";
    }

    return 0;
}