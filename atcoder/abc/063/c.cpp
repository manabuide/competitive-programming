#include <bits/stdc++.h>
using namespace std;

long long solve(int n, vector<int> s) {
    long long total = 0;
    int minimum_value = -1;

    for (int i = 0; i < n; ++i) {
        total += s.at(i);
        if (s.at(i) % 10 != 0) {
            if (minimum_value == -1) {
                minimum_value = s.at(i);
            } else {
                minimum_value = min(minimum_value, s.at(i));
            }
        }
    }

    if (total % 10 == 0 && minimum_value == -1) {
        return 0;
    } else if (total % 10 == 0 && minimum_value != -1) {
        return total - minimum_value;
    } else {
        return total;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s.at(i);
    }

    long long total = solve(n, s);

    cout << total << "\n"s;

    return 0;
}