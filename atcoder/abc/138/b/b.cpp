#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	double total = 0;
	for (int i = 0; i < n; i++) {
		total += 1.0 / a[i];
	}

    cout << fixed << setprecision(10) << 1.0 / total << endl;

    return 0;
}