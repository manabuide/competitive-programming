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

int main() { return 0; }