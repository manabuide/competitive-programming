#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;

	int total = 0;
    int x = n;
    while(x) {
		total += x % 10;
		x /= 10;
    }

	if (n % total == 0) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

    return 0;
}