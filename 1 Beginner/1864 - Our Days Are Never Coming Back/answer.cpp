#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    string quote = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    cin >> N;
    for (int i = 0; i < N; i++)
        cout << quote[i];
    cout << "\n";

    return 0;
}