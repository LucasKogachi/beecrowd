#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, C;
    int var1, var2;

    cin >> A >> B >> C;
    var1 = B - A;
    var2 = C - B;
    if (var1 < var2) cout << ":)";
    else if (var1 == var2 && var1 > 0) cout << ":)";
    else cout << ":(";
    cout << "\n";

    return 0;
}