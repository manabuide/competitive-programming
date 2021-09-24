#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
	cin >> n >> l;

	int taste[n];
	for (int i = 0; i < n; i++) {
		taste[i] = l + (i + 1) - 1;
	}

	int total = 0;
	int min = taste[0];
	for (int i = 0; i < n; i++) {
		if (abs(min) > abs(taste[i])) {
			min = taste[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (min != taste[i]) {
			total += taste[i];
		}
	}

	cout << total << endl;

    return 0;
}