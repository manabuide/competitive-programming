#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 0;
    for (int i = 1; i <= n; ++i) {
        total += 10000 * i;
    }

    cout << total / n << "\n"s;

    return 0;
}