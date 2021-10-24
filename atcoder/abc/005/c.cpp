#include <bits/stdc++.h>
using namespace std;

string solve(int t, int n, vector<int> a, int m, vector<int> b) {
    string answer = "yes";

    if (n < m) {
        answer = "no";
        return answer;
    }

    int j = 0;

    for (int i = 0; i < m; ++i) {
        while (j < n) {
            int dif = b.at(i) - a.at(j);
            if (dif <= t && dif >= 0) {
                ++j;
                break;
            }

            ++j;

            if (j == n) {
                answer = "no";
            }
        }
    }

    return answer;
}

int main() {
    int t, n;
    cin >> t >> n;

    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a.at(i);
    }

    int m;
    cin >> m;

    vector<int> b(m);

    for (int i = 0; i < m; ++i) {
        cin >> b.at(i);
    }

    string answer = solve(t, n, a, m, b);

    cout << answer << "\n"s;

    return 0;
}