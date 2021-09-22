#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int k[n];
    vector<int> a[n];

    for(int i = 0; i < n; i++) {
        cin >> k[i];

        for(int j = 0; j < k[i]; j++) {
            int temp = 0;
            cin >> temp;
            a[i].push_back(temp);
        }
    }

    int count[m] = {};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k[i]; j++) {
            count[a[i][j] - 1]++;
        }
    }

    int answer = 0;
    for(int i = 0; i < m; i++) {
        if(count[i] == n) {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}