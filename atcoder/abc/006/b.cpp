#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a[3] = {0, 0, 1};
	int n = 100000;

	if (n < 4) {
		cout << a[n - 1] << endl;

		return 0;
	}

    for(int i = 3; i < n; i++) {
		int tmp = a[0] + a[1] + a[2];
		tmp %= 10007;
		a[0] = a[1];
		a[1] = a[2];
		a[2] = tmp;
	}

	cout << a[2] << endl;

    return 0;
}