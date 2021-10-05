#include <bits/stdc++.h>
using namespace std;

int main() {
    string t[4] = {"H", "2B", "3B", "HR"};
    bool exists[4] = {};

    string s[4];
    for(int i = 0; i < 4; i++) {
        cin >> s[i];
        for(int j = 0; j < 4; j++) {
            if(s[i] == t[j]) {
                exists[j] = true;
            }
        }
    }

    for(int i = 0; i < 4; i++) {
        if(exists[i] == false) {
            cout << "No" << endl;

            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}