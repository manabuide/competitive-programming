#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;
    for(int index = 0; index < n; index++) {
        int temp;
        cin >> temp;

        a.push_back(temp);
    }

    sort(a.begin(), a.end());

    cout << abs(a[n - 1] - a[0]) << endl;

    return 0;
}
