#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N, soma;
    string produto;

    cin >> T;
    while (T > 0) {
        soma = 0;
        for (int i = 0; i < T; i++) {
            cin >> N;
            getline(cin, produto);
            if (produto == " suco de laranja")     soma += N * 120;
            else if(produto == " goiaba vermelha") soma += N *  70;
            else if(produto == " laranja")         soma += N *  50;
            else if(produto == " brocolis")        soma += N *  34;
            else if(produto == " manga")           soma += N *  56;
            else soma += N * 85;
        }
        if (soma > 130) cout << "Menos " << soma-130;
        else if (soma < 110) cout << "Mais " << 110-soma;
        else cout << soma;
        cout << " mg\n";
        cin >> T;
    }
    
    return 0;
}