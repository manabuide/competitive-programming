#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int total = 0;
	int previous_total = 0;
	for (int h = 1; h <= 999; h++) {
		previous_total = total;
		total += h;

		int dif_a = previous_total - a;
		int dif_b = total - b;
		if (dif_a == dif_b) {
			cout << dif_a << endl;
			break;
		}
	}

	return 0;
}