#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0 && s[i] == '1') {
            cout << "Takahashi" << endl;

            break;
        } else if(i % 2 == 1 && s[i] == '1') {
            cout << "Aoki" << endl;

            break;
        }
    }

    return 0;
}