#include <bits/stdc++.h>
using namespace std;

void solve1() {
    string O, E;
    cin >> O >> E;

    for (int i = 0; i < O.size(); i++) {
        cout << O[i];
        if (i < E.size()) {
            cout << E[i];
        }
    }
    cout << endl;
}

void solve2() {
    string o, e;
    cin >> o >> e;

    string s;
    size_t count_o = 0, count_e = 0;

    for (size_t i = 0; i < e.size() + o.size(); ++i) {
        if ((i + 1) % 2 == 0) {
            s += e.at(count_e++);
        } else {
            s += o.at(count_o++);
        }
    }

    cout << s << "\n"s;
}

int main() { return 0; }