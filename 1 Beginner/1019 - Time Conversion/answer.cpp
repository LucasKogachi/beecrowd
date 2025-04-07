#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int h, m, s;
    
    cin >> N;
    s = N % 60;
    N = N / 60;
    m = N % 60;
    h = N / 60;
    cout << h << ":" << m << ":" << s << "\n";
    
    return 0;
}