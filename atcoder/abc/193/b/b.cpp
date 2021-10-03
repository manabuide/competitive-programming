#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], p[n], x[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> p[i] >> x[i];
    }

    int min_price = INT_MAX;
    for(int i = 0; i < n; i++) {
        int sunuke_machine = x[i] - a[i];

        if(sunuke_machine > 0) {
            min_price = min(min_price, p[i]);
        }
    }

    if(min_price == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << min_price << endl;
    }

    return 0;
}