#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    if(s[0] == s[1] && s[1] == s[2] && s[2] == s[3]) {
        cout << "Weak" << endl;

        return 0;
    }

    for(int i = 0; i < 3; i++) {
        int current_digit = s[i] - '0';
        int next_digit = s[i + 1] - '0';

        if(current_digit != 9 && current_digit != next_digit - 1) {
            cout << "Strong" << endl;

            return 0;
        } else if(current_digit == 9 && next_digit != 0) {
            cout << "Strong" << endl;

            return 0;
        }
    }

    cout << "Weak" << endl;

    return 0;
}