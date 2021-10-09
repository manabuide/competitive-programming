#include <bits/stdc++.h>
using namespace std;

void solve1() {
    long long a[3] = {0, 0, 1};
    int n = 100000;

    if (n < 4) {
        cout << a[n - 1] << endl;

        return 0;
    }

    for (int i = 3; i < n; i++) {
        int tmp = a[0] + a[1] + a[2];
        tmp %= 10007;
        a[0] = a[1];
        a[1] = a[2];
        a[2] = tmp;
    }

    cout << a[2] << endl;
}

void solve2() {
    long long n;
    cin >> n;

    vector<long long> a = {0, 0, 1};

    for (int i = 3; i < n; i++) {
        long long temp = a[i - 1] + a[i - 2] + a[i - 3];
        temp %= 10007;
        a.push_back(temp);
    }

    cout << a[n - 1] << "\n";
}

int main() { return 0; }