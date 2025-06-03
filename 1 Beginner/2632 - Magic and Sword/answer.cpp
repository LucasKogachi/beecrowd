#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, w, h, x0, y0, M, N, cx, cy, damage, min, v[3][2];
    int book[4][4] = {{200, 20, 30, 50}, {300, 10, 25, 40}, {400, 25, 55, 70}, {100, 18, 38, 60}};
    string spell;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> w >> h >> x0 >> y0;
        cin >> spell >> N >> cx >> cy;

        if      (spell == "fire")  M = 0;
        else if (spell == "water") M = 1;
        else if (spell == "earth") M = 2;
        else M = 3;

        damage = 0;
        //intercession x
        if ((cx-book[M][N] <= x0 && x0 <= cx+book[M][N]) || 
            (cx-book[M][N] <= x0+w && x0+w <= cx+book[M][N]) ||
            (x0 <= cx-book[M][N] && cx-book[M][N] <= x0+w) ||
            (x0 <= cx+book[M][N] && cx+book[M][N] <= x0+w)) {
        //intercession y, inside intercession x
        if ((cy-book[M][N] <= y0 && y0 <= cy+book[M][N]) || 
            (cy-book[M][N] <= y0+h && y0+h <= cy+book[M][N]) ||
            (y0 <= cy-book[M][N] && cy-book[M][N] <= y0+h) ||
            (y0 <= cy+book[M][N] && cy+book[M][N] <= y0+h)) {
            damage = book[M][0];
            //find corner closest to the explosion center
            min = (x0-cx)*(x0-cx) + (y0-cy)*(y0-cy);
            v[0][0] = x0; v[0][1] = y0;
            v[1][0] = x0+w; v[1][1] = y0;
            v[2][0] = x0; v[2][1] = y0+h;
            if ((x0+w-cx)*(x0+w-cx) + (y0-cy)*(y0-cy) < min) {
                min = (x0+w-cx)*(x0+w-cx) + (y0-cy)*(y0-cy);
                v[0][0] = x0+w; v[0][1] = y0;
                v[1][0] = x0; v[1][1] = y0;
                v[2][0] = x0+w; v[2][1] = y0+h;
            }
            if ((x0+w-cx)*(x0+w-cx) + (y0+h-cy)*(y0+h-cy) < min) {
                min = (x0+w-cx)*(x0+w-cx) + (y0+h-cy)*(y0+h-cy);
                v[0][0] = x0+w; v[0][1] = y0+h;
                v[1][0] = x0; v[1][1] = y0+h;
                v[2][0] = x0+w; v[2][1] = y0;
            }
            if ((x0-cx)*(x0-cx) + (y0+h-cy)*(y0+h-cy) < min) {
                min = (x0-cx)*(x0-cx) + (y0+h-cy)*(y0+h-cy);
                v[0][0] = x0; v[0][1] = y0+h;
                v[1][0] = x0; v[1][1] = y0;
                v[2][0] = x0+w; v[2][1] = y0+h;
            }
            //exception corner
            if ((min > book[M][N]*book[M][N]) &&
                (cx-book[M][N] <= v[0][0] && v[0][0] <= cx+book[M][N]) &&
                (cy-book[M][N] <= v[0][1] && v[0][1] <= cy+book[M][N])) {
            //coef da reta
            if ((((v[0][0]-cx)*(v[0][1]-cy) < 0) &&
                 ((v[1][0]-cx)*(v[1][1]-cy) < 0) &&
                 ((v[2][0]-cx)*(v[2][1]-cy) < 0)) ||
                (((v[0][0]-cx)*(v[0][1]-cy) > 0) &&
                 ((v[1][0]-cx)*(v[1][1]-cy) > 0) &&
                 ((v[2][0]-cx)*(v[2][1]-cy) > 0))) {
                damage = 0;
            }}
        }}
        cout << damage << "\n";
    }

    return 0;
}