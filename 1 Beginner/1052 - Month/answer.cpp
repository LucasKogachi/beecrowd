#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string v[12] = {"January", "February", "March", "April",
                    "May", "June", "July", "August",
                    "September", "October", "November", "December"};
    int month;
    
    cin >> month;
    cout << v[month-1] << "\n";
    
    return 0;
}