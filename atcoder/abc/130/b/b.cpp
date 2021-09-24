#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;

	int l[n];
	for (int i = 0; i < n; i++) {
		cin >> l[i];
	}

	int d[n + 1];
	d[0] = 0;
	int count = 1;
	for (int i = 1; i < n + 1; i++) {
		d[i] = d[i - 1] + l[i - 1];

		if (d[i] <= x) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}