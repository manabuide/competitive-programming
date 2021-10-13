#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p;
    cin >> n >> p;

    int count = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a < p) {
            ++count;
        }
    }
    cout << count << "\n"s;

    return 0;
}