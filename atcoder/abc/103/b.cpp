#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
	cin >> s >> t;

	int n = 0;
	while (n < s.size()) {
		rotate(s.begin(), s.begin() + 1, s.end());

		if (s == t) {
			cout << "Yes" << endl;

			return 0;
		}

		n++;
	}

	cout << "No" << endl;

    return 0;
}