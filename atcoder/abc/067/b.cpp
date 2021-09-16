#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> l;
	for (int index = 0; index < n; index++) {
		int temp;
		cin >> temp;

		l.push_back(temp);
	}

	sort(l.begin(), l.end(), greater<int>());

	int answer = 0;
	for (int index = 0; index < k; index++) {
		answer += l[index];
	}

	cout << answer << endl;

	return 0;
}