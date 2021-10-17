#include <bits/stdc++.h>
using namespace std;

int main() {
    int r;
    cin >> r;

    string answer;

    if (r < 1200) {
        answer = "ABC";
    } else if (r < 2800) {
        answer = "ARC";
    } else {
        answer = "AGC";
    }

    cout << answer << "\n"s;

    return 0;
}