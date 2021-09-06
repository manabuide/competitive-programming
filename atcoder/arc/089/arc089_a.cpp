#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
	cin >> N;

    int t[100001], x[100001], y[100001];
    int pt = 0, px = 0, py = 0;

    for(int i = 0; i < N; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }

    bool is_valid = true;
    for(int i = 0; i < N; i++) {
        int d = abs(px - x[i]) + abs(py - y[i]);
        int dt = t[i] - pt;

        if(dt < d) {
            is_valid = false;
            break;
        }

        if((dt - d) % 2 == 1) {
            is_valid = false;
            break;
        }

        pt = t[i];
        px = x[i];
        py = y[i];
    }

    cout << (is_valid ? "YES" : "NO") << endl;

    return 0;
}