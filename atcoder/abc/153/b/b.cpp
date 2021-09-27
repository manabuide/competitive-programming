#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, n;
	cin >> h >> n;
    
	vector<long long> a;
	for (int i = 0; i < n; i++) {
		long long temp;
		cin >> temp;

		a.push_back(temp);
	}

	sort(a.begin(), a.end(), [](const int& x, const int& y) {
		return x > y;
	});

	for (int i = 0; i < n; i++) {
		h -= a[i];

		if (h <= 0) {
			cout << "Yes" << endl;

			return 0;
		}
	}

	cout << "No" << endl;

    return 0;
}