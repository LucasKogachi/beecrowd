#include <bits/stdc++.h>
using namespace std;

class Product {
    public:
        int id;
        int units;
        double unit_price;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Product product1, product2;
    double total;

    cin >> product1.id >> product1.units >> product1.unit_price;
    cin >> product2.id >> product2.units >> product2.unit_price;
    total =  product1.units * product1.unit_price;
    total += product2.units * product2.unit_price;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << "\n";
    
    return 0;
}