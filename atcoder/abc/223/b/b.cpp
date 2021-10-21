#include <bits/stdc++.h>
using namespace std;

vector<string> solve(string s) {
    int count = s.size();
    string rotating = s;
    vector<string> v;
    string max_str = s, min_str = s;

    while (count) {
        int rotating_size = rotating.size();
        char left_temp = rotating.at(0);
        for (int i = 0; i < rotating_size - 1; ++i) {
            rotating.at(i) = rotating.at(i + 1);
        }
        rotating.at(rotating_size - 1) = left_temp;
        if (rotating < min_str) {
            min_str = rotating;
        }

        if (rotating > max_str) {
            max_str = rotating;
        }
        --count;
    }
    vector<string> answer = {min_str, max_str};

    return answer;
}

int main() {
    string s;
    cin >> s;

    vector<string> answer = solve(s);

    cout << answer.at(0) << "\n"s;
    cout << answer.at(1) << "\n"s;

    return 0;
}