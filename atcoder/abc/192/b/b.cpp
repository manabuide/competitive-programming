#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if((i + 1) % 2 == 0 && !isupper(s[i])) {
            cout << "No" << endl;

            return 0;
        } else if((i + 1) % 2 == 1 && !islower(s[i])) {
            cout << "No" << endl;

            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}