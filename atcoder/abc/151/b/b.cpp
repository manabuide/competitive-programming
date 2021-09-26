#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, m;
	cin >> n >> k >> m;

	int a[n - 1];
	for (int i = 0; i < n - 1; i++) {
		cin >> a[i];
	}

	int total = 0;
	for (int i = 0; i < n - 1; i++) {
		total += a[i];
	}

	for (int x = 0; x <= k; x++) {
		int average = (total + x) / n;

		if (average >= m) {
			cout << x << endl;

			return 0;
		}

		if (x == k) {
			cout << -1 << endl;
		}
	}

    return 0;
}
