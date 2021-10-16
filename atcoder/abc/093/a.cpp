#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end(),
         [](const char& c1, const char& c2) { return c1 < c2; });

    if (s == "abc"s) {
        cout << "Yes"s
             << "\n"s;
    } else {
        cout << "No"s
             << "\n"s;
    }

    return 0;
}