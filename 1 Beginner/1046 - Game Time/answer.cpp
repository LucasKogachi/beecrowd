#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int start, end;

    cin >> start >> end;
    cout << "O JOGO DUROU ";
    if (start < end)
        cout << end - start;
    else
        cout << 24 - (start - end);
    cout << " HORA(S)\n";
    
    return 0;
}