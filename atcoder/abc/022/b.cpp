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
int main() { return 0; }