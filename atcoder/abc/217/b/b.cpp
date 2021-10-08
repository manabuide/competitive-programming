#include <bits/stdc++.h>
using namespace std;

int main() {
    string s[4] = {"ABC", "ARC", "AGC", "AHC"};

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    bool match[4] = {};

    for(int i = 0; i < 4; i++) {
        if(s1 == s[i]) {
            match[i] = true;
        }

        if(s2 == s[i]) {
            match[i] = true;
        }

        if(s3 == s[i]) {
            match[i] = true;
        }
    }

    for(int i = 0; i < 4; i++) {
        if(match[i] == false) {
            cout << s[i] << endl;

            return 0;
        }
    }

    return 0;
}