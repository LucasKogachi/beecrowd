#include <bits/stdc++.h>
using namespace std;

const double pi = 3.14159;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double R, VOLUME;

    cin >> R;
    VOLUME = (4.0 / 3) * pi * pow(R, 3);
    cout << "VOLUME = " << fixed << setprecision(3) << VOLUME << "\n";
    
    return 0;
}