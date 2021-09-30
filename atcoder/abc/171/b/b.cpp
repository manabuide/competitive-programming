#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
	cin >> n >> k;

    vector<int> p;
	for (int i = 0; i < n; i++) {
		int p_temp;
		cin >> p_temp;

		p.push_back(p_temp);
	}

	sort(p.begin(), p.end(), [](const int &x, const int &y) {
		return x < y;
	});

	int total = 0;
	for (int i = 0; i < k; i++) {
		total += p[i];
	}

	cout << total << endl;

    return 0;
}