#include <bits/stdc++.h>
using namespace std;

void solve1() {
    int n, d, x;
    cin >> n >> d >> x;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int answer = x;
    for (int i = 0; i < n; i++) {
        int temp = (d - 1) / a[i] + 1;

        answer += temp;
    }

    cout << answer << endl;
}

void solve2() {
    int n, d, x;
    cin >> n >> d >> x;

    vector<int> a;
    for (int i = 0; i < n; ++i) {
        int temp_a;
        cin >> temp_a;
        a.push_back(temp_a);
    }

    int total = 0;

    for (int i = 0; i < n; ++i) {
        int j = 0;
        int day = 1;
        while (true) {
            day = j * a.at(i) + 1;
            if (day > d) {
                break;
            }
            ++j;
        }
        total += j;
    }

    cout << total + x << "\n"s;
}

int main() { return 0; }