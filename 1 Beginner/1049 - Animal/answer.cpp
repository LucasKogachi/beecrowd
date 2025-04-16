#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string trait1, trait2, trait3;

    cin >> trait1 >> trait2 >> trait3;
    if (trait1 == "vertebrado") {
        if (trait2 == "ave") {
            if (trait3 == "carnivoro") cout << "aguia\n";
            else cout << "pomba\n";
        } else { // "mamifero"
            if (trait3 == "onivoro") cout << "homem\n";
            else cout << "vaca\n";
        }
    } else {  // "invertebrado"
        if (trait2 == "inseto") {
            if (trait3 == "hematofago") cout << "pulga\n";
            else cout << "lagarta\n";
        } else { // "anelideo"
            if (trait3 == "hematofago") cout << "sanguessuga\n";
            else cout << "minhoca\n";
        }
    }
    
    return 0;
}