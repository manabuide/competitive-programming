#include <bits/stdc++.h>
using namespace std;

long long solve(long long n, long long t, vector<long long> vt) {
    long long total = t;

    for (int i = 1; i < n; ++i) {
        total += min(t, vt.at(i) - vt.at(i - 1));
    }

    return total;
}

int main() {
    long long n, t;
    cin >> n >> t;

    vector<long long> vt(n);
    for (int i = 0; i < n; ++i) {
        cin >> vt.at(i);
    }

    long long total = solve(n, t, vt);

    cout << total << "\n"s;

    return 0;
}