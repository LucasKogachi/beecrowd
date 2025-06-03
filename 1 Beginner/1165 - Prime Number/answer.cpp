#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X, Y;
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> X;
        cout << X;
        if (X > 2 && !(X & 1)) cout << " nao";
        else {
            Y = (sqrt(X) + 0.01);
            for (int j = 3; j <= Y; j++)
                if (X % j == 0) {
                    cout << " nao";
                    break;
                }
        }
        cout << " eh primo\n";
    }
    
    return 0;
}