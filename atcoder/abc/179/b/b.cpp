#include <bits/stdc++.h>
using namespace std;

int main() {
    // int n = 5;
    // int d[n][2] = {{1, 2}, {6, 6}, {4, 4}, {3, 3}, {3, 2}};

    int n;
    cin >> n;

    int d[n][2];
    for(int i = 0; i < n; i++) {
        cin >> d[i][0] >> d[i][1];
    }

    bool exists = false;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(d[i][0] == d[i][1]) {
            count++;
        } else {
            count = 0;
        }

        if(count == 3) {
            cout << "Yes" << endl;

			return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}