#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    string s;
    cin >> n >> x >> s;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'o') {
            x++;
        } else if(s[i] == 'x') {
            if (x > 0) {
                x--;
            }
        }
    }

    cout << x << endl;

    return 0;
}