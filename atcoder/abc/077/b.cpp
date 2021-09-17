#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int x = n; x >= 0; x--) {
		int sqrt_x = sqrt(x);

		if (sqrt_x * sqrt_x == x) {
			cout << x << endl;
			return 0;
		}
	}

	return 0;
}