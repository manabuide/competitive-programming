#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int v[n], p[n];
    for(int i = 0; i < n; i++) {
        cin >> v[i] >> p[i];
    }

    int total = 0;
    for(int i = 0; i < n; i++) {
        total += v[i] * p[i];

        if(total > x * 100) {
            cout << i + 1 << endl;

            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}