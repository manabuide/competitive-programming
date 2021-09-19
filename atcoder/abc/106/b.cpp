#include <bits/stdc++.h>
using namespace std;

int divisor_count(int n) {
    int count = 0;

    for(int x = 1; x <= n; x++) {
        if(n % x == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
	cin >> n;

    int count = 0;
    for(int x = 1; x <= n; x++) {
        if(divisor_count(x) == 8 && x % 2 != 0) {
			count++;
        }
    }

	cout << count << endl;

    return 0;
}