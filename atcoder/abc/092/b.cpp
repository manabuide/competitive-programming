#include <bits/stdc++.h>
using namespace std;

void solve1() {
    int n, d, x;
    cin >> n >> d >> x;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int answer = x;
    for (int i = 0; i < n; i++) {
        int temp = (d - 1) / a[i] + 1;

        answer += temp;
    }

    cout << answer << endl;
}

int main() { return 0; }