#include <bits/stdc++.h>
using namespace std;

double distance(double x[2], double y[2]);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double x[2], y[2];

    cin >> x[0] >> y[0];
    cin >> x[1] >> y[1];
    cout << fixed << setprecision(4);
    cout << distance(x, y) << "\n";
    
    return 0;
}

double distance(double x[2], double y[2]) {
    return sqrt(pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2));
}