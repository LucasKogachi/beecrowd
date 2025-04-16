#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X, Y, aux;
    int start, end;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> X >> Y;
        if (X < Y) {
            start = X;
            end = Y;
        } else {
            start = Y;
            end = X;
        }

        if(start & 1) start += 2;
        else start++;
        
        if(end & 1) end -= 2;
        else end--;
        
        if (start > end)
            cout << "0\n";
        else
            cout << ((start + end) * ((end - start)/2 + 1)) / 2 << "\n";
    }
    
    return 0;
}