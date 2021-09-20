#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	string w[n];
	for (int index = 0; index < n; index++) {
		cin >> w[index];
	}

	bool is_valid = true;
	for (int index = 0; index < n - 1; index++) {
		if (w[index][w[index].size() - 1] != w[index + 1][0]) {
			is_valid = false;

			break;
		}

		for (int dif_index = 0; dif_index < n; dif_index++) {
			if (dif_index == index) {
				continue;
			}

			if (w[index] == w[dif_index]) {
				is_valid = false;

				break;
			}
		}
	}

	if (is_valid) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}