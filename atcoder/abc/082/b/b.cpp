#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<int>());

   cout << "debug: s:" << s << " t:" << t << endl;

    if(s < t) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}