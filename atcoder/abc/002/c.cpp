#include <bits/stdc++.h>
using namespace std;

double solve(int xa, int ya, int xb, int yb, int xc, int yc) {
    double answer;

    answer = abs((xa - xc) * (yb - yc) - (xb - xc) * (ya - yc)) / 2.0;

    return answer;
}

int main() {
    int xa, ya, xb, yb, xc, yc;

    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    double answer = solve(xa, ya, xb, yb, xc, yc);

    cout << fixed << setprecision(10) << answer << "\n"s;

    return 0;
}