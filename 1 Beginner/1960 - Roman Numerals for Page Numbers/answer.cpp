#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    
    cin >> N;
    if (N >= 900) {
        cout << "CM";
        N -= 900;
    }
    if (N >= 500) {
        cout << "D";
        N -= 500;
    }
    if (N >= 400) {
        cout << "CD";
        N -= 400;
    }
    while (N >= 100) {
        cout << "C";
        N -= 100;
    }
    if (N >= 90) {
        cout << "XC";
        N -= 90;
    }
    if (N >= 50) {
        cout << "L";
        N -= 50;
    }
    if (N >= 40) {
        cout << "XL";
        N -= 40;
    }
    while (N >= 10) {
        cout << "X";
        N -= 10;
    }
    if (N == 9) {
        cout << "IX";
        N -= 9;
    }
    if (N >= 5) {
        cout << "V";
        N -= 5;
    }
    if (N == 4) {
        cout << "IV";
        N -= 4;
    }
    while (N >= 1) {
        cout << "I";
        N -= 1;
    }
    cout << "\n";

    return 0;
}