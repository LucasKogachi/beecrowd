#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double soma = 0;
    int age, count = 0;

    cin >> age;
    while (age >= 0) {
        soma += age;
        count++;
        cin >> age;
    }
    cout << fixed << setprecision(2);
    cout << soma / count << "\n";
    
    return 0;
}