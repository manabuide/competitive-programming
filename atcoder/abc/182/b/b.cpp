#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count_max = 0;
    int answer = 0;
    for(int x = 2; x <= 1000; x++) {
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] % x == 0) {
                count++;
            }
        }

        if(count_max < count) {
            count_max = count;
            answer = x;
        }
    }

    cout << answer << endl;

    return 0;
}