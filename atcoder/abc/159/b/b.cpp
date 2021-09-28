#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
	cin >> s;
	
	bool is_palindrome = true;
	int j = s.size() - 1; 
	for (int i = 0; i == j; i++) {
		if (s[i] != s[j]) {
			cout << "No" << endl;

			return 0;
		}

		j--;
	}

	string left = s.substr(0, (s.size() - 1) / 2);
	string right = s.substr((s.size() + 2) / 2, s.size());

	if (left == right) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

    return 0;
}