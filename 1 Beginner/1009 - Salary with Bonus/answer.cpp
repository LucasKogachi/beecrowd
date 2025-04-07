#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string name;
    double fixed_salary, sale_total, salary;

    cin >> name >> fixed_salary >> sale_total;
    salary = fixed_salary + 0.15 * sale_total;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << salary << "\n";
    
    return 0;
}