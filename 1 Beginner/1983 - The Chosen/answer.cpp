#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, M;
    double note, topNote, err = 0.0001;

    cin >> n;
    cin >> M >> topNote;
    for (int i = 1; i < n; i++) {
        cin >> m >> note;
        if (note > topNote) {
            topNote = note;
            M = m;
        }
    }
    if (topNote > 8 - err) cout << M << "\n";
    else cout << "Minimum note not reached\n";
    
    return 0;
}