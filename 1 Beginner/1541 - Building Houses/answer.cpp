#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, C;
    double area, err = 0.0001; // erro

    cin >> A;
    while (A) {
        cin >> B >> C;
        area = (A * B * 100.0) / C;
        A = (sqrt(area) + err);
        cout << A << "\n";
        cin >> A;
    }

    return 0;
}