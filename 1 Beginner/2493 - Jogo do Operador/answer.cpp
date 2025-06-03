#include <bits/stdc++.h>
using namespace std;

bool comparador(string a,string b) {
    return a < b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, XYZ[50][3], E, p;
    int i, j;
    char R[64];
    string N[50];

    while (cin >> T) {
        p = 0; // didnt pass
        for (i = 0; i < T; i++) {
            cin >> XYZ[i][0] >> R;
            j = 0;
            while (R[j] != '=') j++;
            R[j] = '\0';
            XYZ[i][1] = atoi(R);
            XYZ[i][2] = atoi(R+j+1);
        }
        for (i = 0; i < T; i++) {
            cin >> N[p] >> E >> R;
            E--;
            switch (R[0]) {
                case '+':
                    if (XYZ[E][0] + XYZ[E][1] != XYZ[E][2])
                        p++;
                    break;
                case '-':
                    if (XYZ[E][0] - XYZ[E][1] != XYZ[E][2])
                        p++;
                    break;
                case '*':
                    if (XYZ[E][0] * XYZ[E][1] != XYZ[E][2])
                        p++;
                    break;
                default:
                    if (XYZ[E][0] + XYZ[E][1] == XYZ[E][2]) {
                        p++; break;
                    }
                    if (XYZ[E][0] - XYZ[E][1] == XYZ[E][2]) {
                        p++; break;
                    }
                    if (XYZ[E][0] * XYZ[E][1] == XYZ[E][2]) {
                        p++; break;
                    }
            }
        }
        if (p == T) cout << "None Shall Pass!\n";
        else if (p == 0) cout << "You Shall All Pass!\n";
        else {
            sort(N, N + p, comparador);
            for (i = 0; i < p-1; i++) cout << N[i] << " ";
            cout << N[i] << "\n";
        }
    }
    
    return 0;
}