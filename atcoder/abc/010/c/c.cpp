#include <bits/stdc++.h>
using namespace std;

int main() {
    int txa, tya, txb, tyb, t, v;
    cin >> txa >> tya >> txb >> tyb >> t >> v;
    int n;
    cin >> n;
    vector<pair<int, int>> vp;

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        vp.push_back(make_pair(x, y));
    }

    bool valid = false;

    for (int i = 0; i < n; i++) {
        double dist_1 =
            sqrt(pow(vp.at(i).first - txa, 2) + pow(vp.at(i).second - tya, 2));
        double dist_2 =
            sqrt(pow(txb - vp.at(i).first, 2) + pow(tyb - vp.at(i).second, 2));

        if (dist_1 + dist_2 <= (double)t * v) {
            valid = true;
        }
    }

    if (valid) {
        cout << "YES\n"s;
    } else {
        cout << "NO\n"s;
    }

    return 0;
}