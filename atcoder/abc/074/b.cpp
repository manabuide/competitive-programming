#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int k;
	cin >> n >> k;

	int ball[n];
	for (int index = 0; index < n; index++) {
		cin >> ball[index];
	}

	int total = 0;
	for (int y = 0; y < n; y++) {
			int a_dist = ball[y] * 2;
			int b_dist = (k - ball[y]) * 2;

			if (a_dist < b_dist) {
				total += a_dist;
			} else {
				total += b_dist;
			}
	}

	cout << total << endl;

	return 0;
}