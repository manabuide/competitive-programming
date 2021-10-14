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

void solve2() {
    int a, b, c;
    cin >> a >> b >> c;

    string answer = "NO"s;

    for (int x = 1; x <= b; ++x) {
        if (x * a % b == c) {
            answer = "YES"s;
            break;
        }
    }

    cout << answer << "\n"s;
}

int main() { return 0; }
