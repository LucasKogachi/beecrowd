#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int par[5], i_par = 0;
    int impar[5], i_impar = 0;
    int X;
    for (int i = 0; i < 15; i++) {
        cin >> X;
        if (X & 1) {
            impar[i_impar] = X;
            i_impar++;
            if (i_impar == 5) {
                for (int j = 0; j < 5; j++)
                    cout << "impar[" << j << "] = " << impar[j] << "\n";
                i_impar = 0;
            }
        } else {
            par[i_par] = X;
            i_par++;
            if (i_par == 5) {
                for (int j = 0; j < 5; j++)
                    cout << "par[" << j << "] = " << par[j] << "\n";
                i_par = 0;
            }
        }
    }
    for (int i = 0; i < i_impar; i++)
        cout << "impar[" << i << "] = " << impar[i] << "\n";
    for (int i = 0; i < i_par; i++)
        cout << "par[" << i << "] = " << par[i] << "\n";
    
    return 0;
}