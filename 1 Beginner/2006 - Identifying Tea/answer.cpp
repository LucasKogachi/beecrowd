#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, guess, correct = 0;
    
    cin >> T;
    for (int i = 0; i < 5; i++) {
        cin >> guess;
        if (guess == T) correct++;
    }
    cout << correct << "\n";
    
    return 0;
}