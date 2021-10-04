#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, int>> st;
    for(int i = 0; i < n; i++) {
        string s_temp;
        int t_temp;
        cin >> s_temp >> t_temp;

        st.push_back(make_pair(s_temp, t_temp));
    }

    sort(st.begin(), st.end(),
         [](const pair<string, int> &p1, const pair<string, int> &p2) {
             return p1.second > p2.second;
         });

    cout << st[1].first << endl;

    return 0;
}