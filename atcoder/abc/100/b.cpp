#include <bits/stdc++.h>
using namespace std;

int calc(int x) {
	int count = 0;

	while (x % 100 == 0) {
		x /= 100;
		count++;
	}

	return count;
}

int main() {
	int d, n;
	cin >> d >> n;

	int count = 0, x = 0;

	while (x < n) {
		x++;
		if (calc(x) == d) {
			count++;
		}
	}

	cout << x << endl;

	return 0;
}