#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double A[100], x;
    double err = 0.000001; // error

    for (int i = 0; i < 100; i++)
        cin >> A[i];
    cout << fixed << setprecision(1);
    for (int i = 0; i < 100; i++)
        if (A[i] < 10 + err)
            cout << "A[" << i << "] = " << A[i] << "\n";
    
    return 0;
}