#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int total = 0;
    for (int i = 0; i < s.size(); i++) {
        total += s[i] - '0';
    }

    if (total % 9 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}