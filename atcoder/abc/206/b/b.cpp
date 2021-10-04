#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long total = 0;
    long long count = 0;

    while(total < n) {
        count++;

        total += count;
    }

    cout << count << endl;

    return 0;
}
