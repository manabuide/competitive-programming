#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	string s;
	cin >> s;

	if (s.size() != a + b + 1) {
		cout << "No" << endl;
		cout << "a" << endl;
		return 0;
	}

	if (s[a] != '-') {
		cout << "No" << endl;

		return 0;
	}

	s.erase(a, 1);

	for (int index = 0; index < s.size(); index++) {
		if (!isdigit(s[index])) {
			cout << "No" << endl;

			return 0;
		}
	}

	cout << "Yes" << endl;

	return 0;
}