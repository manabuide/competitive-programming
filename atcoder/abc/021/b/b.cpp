#include <bits/stdc++.h>
using namespace std;

void solve1() {
    int N;
    cin >> N;

    int a, b;
    cin >> a >> b;

    int K;
    cin >> K;

    set<int> st;
    for (int i = 0; i < K; i++) {
        int p;
        cin >> p;

        st.insert(p);

        if (p == a || p == b) {
            cout << "NO" << endl;
            return 0;
        }
    }

    if (st.size() != K) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

void solve2() {
    int n, a, b, k;
    cin >> n >> a >> b >> k;

    multiset<int> p;

    for (int i = 0; i < k; ++i) {
        int temp;
        cin >> temp;
        p.insert(temp);
    }

    p.insert(a);
    p.insert(b);

    string answer = "YES"s;

    for (int i = 0; i < n; ++i) {
        if (p.count(i + 1) >= 2) {
            answer = "NO"s;
            break;
        }
    }

    cout << answer << "\n"s;
}

int main() { return 0; }