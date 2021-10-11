#include <bits/stdc++.h>
using namespace std;

void solve1() {
    int N;
    cin >> N;

    int T;
    cin >> T;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int total = 0;
    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            total += T;
        } else if (A[i] + T < A[i + 1]) {
            total += T;
        } else {
            total += A[i + 1] - A[i];
        }
    }

    cout << total << endl;
}

void solve2() {
    int n, t;
    cin >> n >> t;

    vector<int> a;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    int total = t;

    for (int i = 1; i < n; ++i) {
        if (a.at(i - 1) + t > a.at(i)) {
            total += a.at(i) - a.at(i - 1);
        } else {
            total += t;
        }
    }

    cout << total << "\n"s
}

int main() { return 0; }