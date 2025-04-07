#include <bits/stdc++.h>
using namespace std;

int MaiorAB(int a, int b);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, C;
    int maior;

    cin >> A >> B >> C;
    maior = MaiorAB(A, B);
    maior = MaiorAB(maior, C);
    cout << maior << " eh o maior\n";
    
    return 0;
}

int MaiorAB(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}