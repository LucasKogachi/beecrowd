#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    double D, S[7], soma;
    string name;

    cin >> N;
    cout << fixed << setprecision(2);
    for (int i = 0; i < N; i++) {
        cin >> name >> D;
        for (int j = 0; j < 7; j++)
            cin >> S[j];
        sort(S, S+7);
        soma = 0;
        for (int j = 1; j < 6; j++)
            soma += S[j];
        cout << name << " " << D * soma << "\n";
    }
    
    return 0;
}