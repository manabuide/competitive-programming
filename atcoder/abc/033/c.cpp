#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    int count = 0;

    bool has_zero = false;
    for (int i = 0; i < (int)s.size(); ++i) {
        if (s.at(i) == '0') {
            has_zero = true;
        } else if (s.at(i) == '+') {
            if (has_zero) {
                has_zero = false;
            } else {
                ++count;
            }
        }
    }

    if (!has_zero) {
        ++count;
    }

    return count;
}

int main() {
    string s;
    cin >> s;

    int answer = solve(s);

    cout << answer << "\n"s;

    return 0;
}
