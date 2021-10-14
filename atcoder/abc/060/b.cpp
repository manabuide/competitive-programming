#include <bits/stdc++.h>
using namespace std;

void solve() {
    int A, B, C;
    cin >> A >> B >> C;

    bool can = false;
    for (int i = 0; i < B; i++) {
        if (A * (i + 1) % B == C) {
            can = true;
            break;
        }
    }

    if (can) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() { return 0; }
