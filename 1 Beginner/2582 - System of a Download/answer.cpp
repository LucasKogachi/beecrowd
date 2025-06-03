#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int C, X, Y;
    string songs[11] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE",
                        "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};

    cin >> C;
    for (int i = 0; i < C; i++) {
        cin >> X >> Y;
        cout << songs[X+Y] << "\n";
    }

    return 0;
}