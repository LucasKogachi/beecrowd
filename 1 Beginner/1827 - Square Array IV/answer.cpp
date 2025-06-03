#include <bits/stdc++.h>
using namespace std;

int matrixFill(int i, int j, int comeco, int meio, int fim);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, i, j, comeco, meio, fim;

    while (cin >> N) {
        comeco = N / 3;
        meio = N / 2;
        fim = N - 1 - comeco;
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++)
                cout <<  matrixFill(i, j, comeco, meio, fim);
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}

int matrixFill(int i, int j, int comeco, int meio, int fim) {
    if (i == meio && j == meio) return 4;
    if (i < comeco || i > fim || j < comeco || j > fim) {
        if (i == j) return 2;
        else if (i + j == comeco + fim) return 3;
        else return 0;
    } else return 1; // inner part
}