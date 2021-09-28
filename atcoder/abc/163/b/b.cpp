#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n];
    for(int i = 0; i < m; i++) {
        cin >> a[i];
    }

    int total = 0;
    for(int i = 0; i < m; i++) {
        total += a[i];
    }

    int play_day = n - total;
    if(play_day >= 0) {
        cout << play_day << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}