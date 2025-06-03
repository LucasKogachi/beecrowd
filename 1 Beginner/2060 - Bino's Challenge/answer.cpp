#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, L, m2 = 0, m3 = 0, m4 = 0, m5 = 0;
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> L;
        if (!(L & 1)) {
            m2++;
            if (L%4 == 0) m4++;
        }
        if (L%3 == 0) m3++;
        if (L%5 == 0) m5++;
    }
    cout << m2 << " Multiplo(s) de 2\n";
    cout << m3 << " Multiplo(s) de 3\n";
    cout << m4 << " Multiplo(s) de 4\n";
    cout << m5 << " Multiplo(s) de 5\n";
    
    return 0;
}