#include <bits/stdc++.h>
using namespace std;

void solve1() {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    string s;
    cin >> s;

    set<char> st;
    for (int str_index = 0; str_index < s.size(); str_index++) {
        st.insert(s[str_index]);
    }

    vector<char> v;
    for (auto c : st) {
        v.push_back(c);
    }

    char answer = ' ';
    for (int v_index = 0; v_index < v.size(); v_index++) {
        if (v[v_index] != alphabet[v_index]) {
            answer = alphabet[v_index];
            break;
        }
    }

    if (answer != ' ') {
        cout << answer << endl;
    } else {
        cout << "None" << endl;
    }
}

void solve2() {
    string s;
    cin >> s;

    int count[26] = {};

    for (int i = 0; i < s.size(); ++i) {
        ++count[s.at(i) - 'a'];
    }

    string alphabet_table = "abcdefghijklmnopqrstuvwxyz"s;
    string answer = "None"s;

    for (int i = 0; i < 26; ++i) {
        if (!count[i]) {
            answer = alphabet_table[i];
            break;
        }
    }

    cout << answer << "\n"s;
}

int main() { return 0; }