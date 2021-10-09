#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if (s == t) {
        cout << "Yes"
             << "\n";
        return 0;
    }

    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] != t[i]) {
            if (s[i] == t[i + 1]) {
                char temp = t[i];
                t[i] = t[i + 1];
                t[i + 1] = temp;

                if (s == t) {
                    cout << "Yes"
                         << "\n";

                    return 0;
                }
            }
        }
    }

    cout << "No"
         << "\n";

    return 0;
}