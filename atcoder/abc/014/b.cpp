#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;

    int X;
	cin >> X;

    int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bitset<20> b = bitset<20>(X);

	int total = 0;

	for (int i = 0; i < n; i++) {
		if (b.test(i)) {
			total += a[i];
		}
	}

	cout << total << endl;

    return 0;
}