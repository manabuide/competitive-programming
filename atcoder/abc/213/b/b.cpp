#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    vector<long long> sorted_a = a;

    sort(sorted_a.begin(), sorted_a.end(),
         [](const int &x, const int &y) { return x < y; });

    int booby = sorted_a[n - 2];

    for(int i = 0; i < n; i++) {
        if(booby == a[i]) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}