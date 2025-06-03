#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, q, r;

    cin >> a >> b;
    r = a % b;
    if (r < 0) r += abs(b);
    q = (a - r) / b;
    cout << q << " " << r << "\n";

    return 0;
}