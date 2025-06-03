#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, T, smallest, torturer = 1;

    cin >> N >> smallest;
    for (int i = 2; i <= N; i++) {
        cin >> T;
        if (T < smallest) {
            smallest = T;
            torturer = i;
        }
    }
    cout << torturer << "\n";

    return 0;
}