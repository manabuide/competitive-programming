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

int main() { return 0; }