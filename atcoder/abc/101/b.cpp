#include <bits/stdc++.h>
using namespace std;

int s(int n) {
    int total = 0;
    while(n) {
        total += n % 10;

        n /= 10;
    }

    return total;
}

int main() {
    int n;
	cin >> n;

    if(n % s(n) == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}