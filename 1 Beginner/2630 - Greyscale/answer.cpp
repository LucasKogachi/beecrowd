#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, RGB[3];
    double P;
    string conversion;

    cin >> T;
    cout << fixed << setprecision(0);
    for (int i = 0; i < T; i++) {
        cin >> conversion;
        for (int j = 0; j < 3; j++) cin >> RGB[j];
        if (conversion == "eye") {
            P = 0.3*RGB[0] + 0.59*RGB[1] + 0.11*RGB[2];
        } else if (conversion == "mean") {
            P = (RGB[0] + RGB[1] + RGB[2])/3.0;
        } else {
            sort(RGB, RGB+3);
            if (conversion == "max") P = RGB[2];
            else P = RGB[0];
        }
        cout << "Caso #" << i+1 << ": " << trunc(P + 0.00001) << "\n";
    }

    return 0;
}