#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b;

    for(int i = 0; i < n; i++) {
        if(a[i] != x) {
            b.push_back(a[i]);
        }
    }

    for(int i = 0; i < b.size(); i++) {
        cout << b[i];

        if(i == b.size() - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }

    return 0;
}