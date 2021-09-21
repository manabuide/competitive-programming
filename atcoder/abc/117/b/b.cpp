#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;

    vector<int> l;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;

		l.push_back(temp);
	}

	sort(l.begin(), l.end(), greater<int>());

	int total = 0;
	for (int i = 1; i < n; i++) {
		total += l[i];
	}

	if (l[0] < total) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

    return 0;
}