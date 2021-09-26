#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;

    string s;
	cin >> s;

	if (n % 2 == 1) {
		cout << "No" << endl;

		return 0;
	}

	if (s.substr(0, n / 2) == s.substr(n / 2, n)) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

    return 0;
}