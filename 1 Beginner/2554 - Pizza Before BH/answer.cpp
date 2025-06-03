#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, D, p;
    string pizzaDay, pDay;
    bool isPizzaDay, foundPizzaDay;
    
    while (cin >> N) {
        cin >> D;
        foundPizzaDay = false;
        for (int i = 0; i < D; i++) {
            cin >> pDay;
            isPizzaDay = true;
            for (int j = 0; j < N; j++) {
                cin >> p;
                if (p == 0) isPizzaDay = false;
            }
            if (isPizzaDay && foundPizzaDay == false) {
                pizzaDay = pDay;
                foundPizzaDay = true;
            }
        }
        if (foundPizzaDay) cout << pizzaDay << "\n";
        else cout << "Pizza antes de FdI\n";
    }

    return 0;
}