#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int b[n];
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int total = 0;
    for(int i = 0; i < n; i++) {
        total += a[i] * b[i];
    }

    if(total == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}