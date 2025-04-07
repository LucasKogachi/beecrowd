#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int anos, meses, dias;
    
    cin >> N;
    anos  = N / 365;
    N     = N % 365;
    meses = N / 30;
    dias  = N % 30;
    cout << anos  << " ano(s)\n";
    cout << meses << " mes(es)\n";
    cout << dias  << " dia(s)\n";
    
    return 0;
}