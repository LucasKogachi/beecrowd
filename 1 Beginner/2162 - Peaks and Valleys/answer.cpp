#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, H, before, flag = 0;
    bool nlogony = true; // landscape

    cin >> N >> before;
    for (int i = 1; i < N; i++) {
        cin >> H;
        if (nlogony) {
            if (before == H) nlogony = false;
            else if (before > H) {
                if (flag <= 0) flag = 1;
                else nlogony = false;
            } else { // before < H
                if (flag >= 0) flag = -1;
                else nlogony = false;
            }
        } else break;
        before = H;
    }
    if (nlogony) cout << "1\n";
    else cout << "0\n";
    
    return 0;
}