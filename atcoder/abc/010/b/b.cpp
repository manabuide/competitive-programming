#include <bits/stdc++.h>
using namespace std;

void solve1() {
    int N;
    cin >> N;

    int count = 0;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        while (x % 2 == 0 || x % 3 == 2) {
            x--;
            count++;
        }
    }

    cout << count << endl;
}

void solve2() {
    int n;
    cin >> n;

    vector<int> a;

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    auto pattern1 = [](const int x) {
        if (x % 2 == 0) {
            return 1;
        } else {
            return 0;
        }
    };

    auto pattern2 = [](const int x) {
        if (x % 3 == 2) {
            return 1;
        } else {
            return 0;
        }
    };

    int count = 0;

    for (int i = 0; i < n; ++i) {
        for (int x = a[i]; x > 0; --x) {
            if (pattern1(x)) {
                ++count;
            } else if (pattern2(x)) {
                ++count;
            } else {
                break;
            }
        }
    }

    cout << count << "\n"s;
}

int main() { return 0; }
