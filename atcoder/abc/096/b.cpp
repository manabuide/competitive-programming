#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    int k;
	cin >> a >> b >> c >> k;

	int total = 0;
	int max_value = 0;
	if (a >= b && a >= c) {
		max_value = a;
		total = b + c;
	} else if (b > a && b > c) {
		max_value = b;
		total = a + c;
	} else {
		max_value = c;
		total = a + b;
	}

	for (int i = 0; i < k; i++) {
		max_value *= 2;
	}

	total += max_value;
	cout << total << endl;

    return 0;
}