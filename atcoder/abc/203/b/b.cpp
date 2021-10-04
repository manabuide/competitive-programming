#include <bits/stdc++.h>
using namespace std;

int main() {
    // int n = 1, k = 2;
    int n, k;
    cin >> n >> k;

    int total = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            string s;

            s = to_string(i) + '0' + to_string(j);
            total += stoi(s);
        }
    }

    cout << total << endl;

    return 0;
}