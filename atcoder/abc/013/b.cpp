#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int count1 = 0, count2 = 0;

    if(a < b) {
        count1 = b - a;
        count2 = (10 - b) + a;
    } else {
        count1 = a - b;
        count2 = (10 - a) + b;
    }

    if(count1 < count2) {
        cout << count1 << endl;
    } else {
        cout << count2 << endl;
    }

    return 0;
}