#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<long long> l = {2, 1};

	for (int index = 2; index <= n; index++) {
		long long lucas = l[index - 1] + l[index - 2];

		l.push_back(lucas);
	}
	
	cout << l[n] << endl;

	return 0;
}