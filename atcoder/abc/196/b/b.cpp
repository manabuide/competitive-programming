#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int pos = s.find('.');

    if(pos == string::npos) {
        cout << s << endl;
    } else {
        cout << s.substr(0, s.find('.')) << endl;
    }

    return 0;
}