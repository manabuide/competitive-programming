#include <bits/stdc++.h>
using namespace std;

void solve1() {
    int a, b, k;
    cin >> a >> b >> k;

    for (int x = a; x <= min(b, a + k - 1); x++) {
        cout << x << endl;
    }

    for (int x = max(b - k + 1, a + k); x <= b; x++) {
        cout << x << endl;
    }
}

int main() { return 0; }