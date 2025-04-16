#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int start[3], end[3], minutes;

    cin >> start[0] >> start[1] >> end[0] >> end[1];
    start[2] = 60 * start[0] + start[1];
    end[2]   = 60 * end[0]   + end[1];
    cout << "O JOGO DUROU ";
    if (end[2] > start[2])
        minutes = end[2] - start[2];
    else
        minutes = 24 * 60 - start[2] + end[2];
    cout << minutes / 60 << " HORA(S) E " << minutes % 60 << " MINUTO(S)\n";
    
    return 0;
}