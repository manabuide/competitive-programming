#include <bits/stdc++.h>
using namespace std;

int main() {
	int W = 3, a = 1, b = 3;

	if (abs(a - b) <= W) {
		cout << 0 << endl;
	} else {
		cout << abs(a - b) - W << endl;
	}

	return 0;
}