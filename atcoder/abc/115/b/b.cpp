#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> p;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;

		p.push_back(temp);
	}

	sort(p.begin(), p.end(), greater<int>());

	p[0] = p[0] / 2;

	int total = 0;
	for (int i = 0; i < n; i++) {
		total += p[i];
	}
	cout << total << endl;

	return 0;
}