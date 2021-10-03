#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int answer = INT_MAX;
    for(int i = 0; i < n; i++) {
        int max_time = 0;
        for(int j = 0; j < n; j++) {
            if(i == j) {
                max_time = a[i] + b[j];
            } else {
                max_time = max(a[i], b[j]);
            }
            answer = min(answer, max_time);
        }
    }

    cout << answer << endl;

    return 0;
}