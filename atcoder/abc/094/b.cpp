#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, x;
	cin >> n >> m >> x;

	int a[m];
	for (int index = 0; index < m; index++) {
		cin >> a[index];
	}

	int left_cost = 0; 
	for (int index = x; index > 0; index--) {
		for (int a_index = 0; a_index < m; a_index++) {
			if (a[a_index] == index) {
				left_cost++;
			}
		}
	}

	int right_cost = 0;
	for (int index = x; index < n; index++) {
		for (int a_index = 0; a_index < m; a_index++) {
			if (a[a_index] == index) {
				right_cost++;
			}
		}
	}

	if (left_cost >= right_cost) {
		cout << right_cost << endl;
	} else {
		cout << left_cost << endl;
	}

	return 0;
}