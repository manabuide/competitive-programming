#include <bits/stdc++.h>
using namespace std;

int main() {
    string s[3];
    for (int i = 0; i < 3; i++) {
        cin >> s[i];
    }

    string t;
    cin >> t;

    for (int i = 0; i < t.size(); i++) {
        char c = t[i];
        cout << s[atoi(&c) - 1];
    }

    cout << "\n";

    return 0;
}