#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double A, B, C, D;
    double media;
    double err = 0.00001; //error

    cin >> A >> B >> C >> D;
    media = (2*A + 3*B + 4*C + D) / 10;
    cout << fixed << setprecision(1);
    cout << "Media: " << media << "\n";
    if (media > 7 - err) {
        cout << "Aluno aprovado." << "\n";
    } else if (media > 5 - err) {
        cout << "Aluno em exame." << "\n";
        cin >> A;
        cout << "Nota do exame: " << A << "\n";
        media = (media + A)/2;
        if (media > 5 - err) cout << "Aluno aprovado.\n";
        else cout << "Aluno reprovado.\n";
        cout << "Media final: " << media << "\n";
    } else cout << "Aluno reprovado.\n";
    
    return 0;
}