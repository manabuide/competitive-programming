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

    int min_a = 0, max_b = INT_MAX;
    for(int i = 0; i < n; i++) {
        min_a = max(min_a, a[i]);
        max_b = min(max_b, b[i]);
    }

    int count = max_b - min_a + 1;

    if(count > 0) {
        cout << count << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}