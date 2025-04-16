#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y, aux;
    int start, end;

    cin >> X >> Y;
    if (X < Y) {
        start = X; end = Y;
    } else {
        start = Y; end = X;
    }

    if(!(start & 1)) start++;
    else start += 2;
    
    if(!(end & 1)) end--;
    else end -= 2;
    
    if (start > end)
        cout << "0\n";
    else
        cout << ((start + end) * ((end - start)/2 + 1)) / 2 << "\n";
    
    return 0;
}