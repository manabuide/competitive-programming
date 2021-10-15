#include <bits/stdc++.h>
using namespace std;

void solve1() {
    int x, y, z;
    cin >> x >> y >> z;

    int answer = 0;
    for (int n = x; n >= 0; n--) {
        int seat = n * y;
        int margin = (n + 1) * z;

        if (seat + margin <= x) {
            answer = n;
            break;
        }
    }

    cout << answer << endl;
}

int main() { return 0; }