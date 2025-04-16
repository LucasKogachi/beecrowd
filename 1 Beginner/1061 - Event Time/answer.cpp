#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int W, X, Y, Z;
    int start, end, duration;
    char c[10];

    cin >> c >> W;
    start = W * 24 * 60 * 60;
    cin >> X >> c >> Y >> c >> Z;
    start += 60 * 60 * X + 60 * Y + Z;

    cin >> c >> W;
    end = W * 24 * 60 * 60;
    cin >> X >> c >> Y >> c >> Z;
    end += 60 * 60 * X + 60 * Y + Z;

    duration = end - start;
    Z = duration % 60;
    Y = duration / 60;
    X = Y / 60;
    Y = Y % 60;
    W = X / 24;
    X = X % 24;
    cout << W << " dia(s)\n";
    cout << X << " hora(s)\n";
    cout << Y << " minuto(s)\n";
    cout << Z << " segundo(s)\n";
    
    return 0;
}