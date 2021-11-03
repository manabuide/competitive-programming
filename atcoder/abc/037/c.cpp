#include <bits/stdc++.h>
using namespace std;

long long solve(int n, int k, vector<long long> a) {
    vector<long long> s(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        s.at(i + 1) = s.at(i) + a.at(i);
    }

    long long total = 0;
    for (int i = 0; i <= n - k; ++i) {
        total += s.at(i + k) - s.at(i);
    }

    return total;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<long long> a;
    for (int i = 0; i < n; ++i) {
        long long temp;
        cin >> temp;

        a.push_back(temp);
    }

    long long answer = solve(n, k, a);

    cout << answer << "\n"s;

    return 0;
}