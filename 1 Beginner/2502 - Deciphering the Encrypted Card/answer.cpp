#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int C, N, i, j;
    char cipher[128];
    string a, b, line;
    
    while (cin >> C) {
        cin >> N;
        cin.ignore();
        getline(cin, a);
        getline(cin, b);
        for (i = 0; i < 128; i++) cipher[i] = i; // reset cipher
        for (i = 0; i < C; i++) { // build cipher
            if ('A' <= a[i] && a[i] <= 'Z') {
                if ('A' <= b[i] && b[i] <= 'Z') {
                    cipher[a[i]] = b[i];
                    cipher[b[i]] = a[i];
                    cipher[a[i]+32] = b[i]+32;
                    cipher[b[i]+32] = a[i]+32;
                } else {
                    cipher[a[i]+32] = b[i];
                    cipher[b[i]] = a[i]+32;
                }
            } else {
                if ('A' <= b[i] && b[i] <= 'Z') {
                    cipher[a[i]] = b[i]+32;
                    cipher[b[i]+32] = a[i];
                } else {
                    cipher[a[i]] = b[i];
                    cipher[b[i]] = a[i];
                }
            }
        }
        for (i = 0; i < N; i++) {
            getline(cin, line);
            j = 0;
            while (line[j] != '\0') {
                line[j] = cipher[line[j]];
                j++;
            }
            cout << line << "\n";
        }
        cout << "\n";
    }
    
    return 0;
}