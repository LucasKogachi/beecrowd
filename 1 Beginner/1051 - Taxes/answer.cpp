#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double salary, taxes;
    double err = 0.00001; //error

    cin >> salary;
    cout << fixed << setprecision(2);
    if (salary < 2000 + err) {
        cout << "Isento\n";
        return 0;
    }
    if (salary < 3000 + err) {
        taxes = 0.08 * (salary - 2000);
    } else {
        if (salary < 4500 + err) {
            taxes = 80 + 0.18 * (salary - 3000);
        } else {
            taxes = 350 + 0.28 * (salary - 4500);
        }
    }
    cout << "R$ " << taxes << "\n";
    
    return 0;
}