#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string crow_action;
    int soma;
    for (int i = 0; i < 3; i++) {
        soma = 0;
        cin >> crow_action;
        while(crow_action != "caw") {
            if (crow_action[0] == '*') soma += 4;
            if (crow_action[1] == '*') soma += 2;
            if (crow_action[2] == '*') soma += 1;
            cin >> crow_action;
        }
        cin >> crow_action;
        cout << soma << "\n";
    }

    return 0;
}