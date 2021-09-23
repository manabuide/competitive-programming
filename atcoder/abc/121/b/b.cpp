#include <bits/stdc++.h>
using namespace std;

int main() {
	//int n = 2, m = 3, c = -10;
	//int b[m] = {1, 2, 3};
	//int a[n][m] = {{3, 2, 1}, {1, 2, 2}};

	int n, m, c;
	cin >> n >> m >> c;

	int b[m];
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	int a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	int count = 0;
	for (int i = 0; i < n; i++) {
		int total = 0;
		for (int j = 0; j < m; j++) {
			total += a[i][j] * b[j];
		}
		total += c;

		if (total > 0) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}