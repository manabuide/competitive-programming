#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    int count = 0;

    for (int i = 0; i < (int)s.size() - 1; ++i) {
        if (s.at(i) == 'W' && s.at(i + 1) == 'B') {
            ++count;
        } else if (s.at(i) == 'B' && s.at(i + 1) == 'W') {
            ++count;
        }
    }

    return count;
}

int main() {
    string s;
    cin >> s;

    int count = solve(s);

    cout << count << "\n"s;

    return 0;
}