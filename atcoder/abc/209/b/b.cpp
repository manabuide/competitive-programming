#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int a[n];
    int total = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if((i + 1) % 2 == 0) {
            a[i] -= 1;
        }
        total += a[i];
    }

    if(total <= x) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}