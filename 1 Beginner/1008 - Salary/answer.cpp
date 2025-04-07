#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int id, hours;
    double amount_hour;

    cin >> id >> hours >> amount_hour;
    cout << "NUMBER = " << id << "\n";
    cout << "SALARY = U$ " << fixed << setprecision(2) << hours * amount_hour << "\n";
    
    return 0;
}