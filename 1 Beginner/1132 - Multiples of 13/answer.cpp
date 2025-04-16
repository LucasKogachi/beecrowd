#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y, soma;
    int start, end;

    cin >> X >> Y;
    if (X < Y) {
        start = X;
        end = Y;
    } else {
        start = Y;
        end = X;
    }
    soma = ((start + end) * (end - start + 1)) / 2;
    if (start % 13 != 0)
        start += 13 - start % 13;
    end -= end % 13;
    if (start <= end)
        soma -= ((start + end) * ((end - start)/13 + 1)) / 2;
    cout << soma << "\n";
    
    return 0;
}