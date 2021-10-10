#include <bits/stdc++.h>
using namespace std;

void solve1() {
    int N;
    cin >> N;

    set<int> st;
    int count = 0;

    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;

        if (st.count(A)) {
            count++;
        }
        st.insert(A);
    }

    cout << count << endl;
}

void solve2() {
    int n;
    cin >> n;

    multiset<int> a;

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        a.insert(temp);
    }

    int count = 0;

    for (int i = 1; i <= 100000; ++i) {
        if (a.count(i)) {
            count += a.count(i) - 1;
        }
    }

    cout << count << "\n"s;
}

int main() { return 0; }